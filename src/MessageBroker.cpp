#include <string>

#include <MessageBroker.h>

namespace MaxBotMessages {

///static variables
std::vector<std::string>        MessageBroker::_inProcessPublishers;
std::mutex                      MessageBroker::_inProcessMutex;

MessageBroker::MessageBroker(const int threadPoolSize)
    : _context(zmq::context_t(threadPoolSize)), _publisher(_context, ZMQ_PUB),
    _epoch(std::chrono::steady_clock::now()), _sentMulticast(false), _connectedInProcess(1) {
    BindPublisherAndLocalSubscriber();
    SendMulticast();
}

MessageBroker::~MessageBroker() {}

void MessageBroker::BindPublisherAndLocalSubscriber() {
    srand(time(NULL));
    bool success = false;
    int i=0;
    while(!success && i++ < BIND_RETRIES) {
        _publisherPort = rand() % PUBLISHER_RANGE + BROADCAST_PORT + 1;
        try {
            std::string endpoint = "tcp://" + Multicast::GetLocalIp() + ":" + std::to_string(_publisherPort);
            _publisher.bind(endpoint);
            std::unique_ptr<zmq::socket_t> subscriber = std::unique_ptr<zmq::socket_t>(new zmq::socket_t(_context, ZMQ_SUB));
            subscriber->connect(endpoint);
            _subscribers.push_back(std::make_tuple(endpoint, move(subscriber)));
            success = true;
            std::lock_guard<std::mutex> lock(_inProcessMutex);
            _inProcessPublishers.push_back(endpoint);
        }
        catch (zmq::error_t e) {}
    }
    if (!success) throw;
}

void MessageBroker::ProcessSubscriptions() {
    for (auto subscriber=_subscribers.begin(); subscriber!=_subscribers.end(); subscriber++) {
        int status = 1;
        while(status)
        {
            zmq::message_t msg;
            status = std::get<1>(*subscriber)->recv(&msg, ZMQ_DONTWAIT);
            if (status == 0) break;
            std::string topic(static_cast<char*>(msg.data()), msg.size());
            for (auto subscription=_subscriptions.begin(); subscription!=_subscriptions.end(); subscription++) {
                if (std::get<0>(*subscription).compare(topic) != 0) continue;
                status = std::get<1>(*subscriber)->recv(&msg, ZMQ_RCVMORE);
                std:: string msg_str(static_cast<char*>(msg.data()), msg.size());
                std::get<1>(*subscription)(msg_str);
            }
        }
    }
}

void MessageBroker::SendMulticast() {
    std::thread t ( [&]() {
        for (int i = 1; i <= MULTICAST_TIMES; i++) {
            std::this_thread::sleep_for(std::chrono::milliseconds(MULTICAST_WAIT * i));
            _sentMulticast = true;
            _multicast.Notify(_publisherPort);
            _sentMulticast = true;
        }
    });
    t.detach();
}

bool MessageBroker::SubsriptionExists(std::string& endpoint) {
    if (endpoint.substr(endpoint.size() - 5, 5) == std::to_string(_publisherPort)) return true;
    bool found = false;
    for (auto subscriber=_subscribers.begin(); subscriber!=_subscribers.end(); subscriber++) {
        if (std::get<0>(*subscriber) == endpoint) {
            found = true;
            break;
        }
    }
    return found;
}

bool MessageBroker::Subscribe(std::vector<std::string> endpoints) {
    bool found = false;
    for (auto endpoint : endpoints) {
        if (SubsriptionExists(endpoint)) continue;
        std::unique_ptr<zmq::socket_t> subscriber = std::unique_ptr<zmq::socket_t>(new zmq::socket_t(_context, ZMQ_SUB));
        subscriber->connect(endpoint);
        for (auto subscription : _subscriptions) {
            std::string& topic = std::get<0>(subscription);
            subscriber->setsockopt(ZMQ_SUBSCRIBE, topic.c_str(), topic.size());
        }
        _subscribers.push_back(std::make_tuple(endpoint, move(subscriber)));
        found = true;
    }
    return found;
}

void MessageBroker::FindPublishers() {
    if (_connectedInProcess < _inProcessPublishers.size()) {
        std::lock_guard<std::mutex> lock(_inProcessMutex);
        if (Subscribe(_inProcessPublishers))
            _connectedInProcess = _inProcessPublishers.size();
    } else if (Subscribe(_multicast.GetNotifications())) {
            SendMulticast();
    }
}

void MessageBroker::Publish(const std::string &topic, google::protobuf::Message &message) {
    int sz = topic.size();
    zmq::message_t hdr (sz);
    memcpy(static_cast<char*>(hdr.data()), topic.data(), sz);
    _publisher.send(hdr, ZMQ_SNDMORE);
    std::string str;
    message.SerializeToString(&str);
    sz = str.size();
    zmq::message_t msg (sz);
    memcpy(static_cast<char*>(msg.data()), str.data(), sz);
    _publisher.send(msg);
}

void MessageBroker::Subscribe(const std::string &topic, SubscriptionCallback callback) {
    for (auto subscriber=_subscribers.begin(); subscriber!=_subscribers.end(); subscriber++) {
        std::get<1>(*subscriber)->connect(std::get<0>(*subscriber));
        std::get<1>(*subscriber)->setsockopt(ZMQ_SUBSCRIBE, topic.c_str(), topic.size());
    }
    _subscriptions.push_back(std::make_tuple(topic, callback));
}

void MessageBroker::DoWork() {
    if (!_sentMulticast)
        FindPublishers();
    else
        _sentMulticast = false;
    ProcessSubscriptions();
}

long long MessageBroker::MicrosecondsSinceEpoch() {
    auto now = std::chrono::steady_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>(now - _epoch).count();
}

}
