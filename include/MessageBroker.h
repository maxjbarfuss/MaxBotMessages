#pragma once

#include <thread>
#include <tuple>
#include <chrono>
#include <vector>
#include <mutex>

#include <google/protobuf/message.h>
#include <zmq.hpp>

#include <IMessageBroker.h>
#include <Multicast.h>

namespace MaxBotMessages {

class MessageBroker : public IMessageBroker {

#define PUBLISHER_RANGE         1000
#define BIND_RETRIES            10
#define MULTICAST_TIMES         5
#define MULTICAST_WAIT          250     //milliseconds
private:
    static std::vector<std::string> _inProcessPublishers;
    static std::mutex _inProcessMutex;
private:
    Multicast _multicast;
    zmq::context_t _context;
    zmq::socket_t _publisher;
    std::vector<std::tuple<std::string, std::unique_ptr<zmq::socket_t>>> _subscribers;
    std::vector<std::tuple<std::string, SubscriptionCallback>> _subscriptions;
    int _publisherPort;
    std::chrono::time_point<std::chrono::steady_clock> _epoch;
    bool _sentMulticast;
    unsigned _connectedInProcess;
private:
    void BindPublisherAndLocalSubscriber();
    void FindPublishers();
    void ProcessSubcribers();
    bool SubsriptionExists(std::string& endpoint);
    void SendMulticast();
public:
    MessageBroker(int threadPoolSize);
    ~MessageBroker();
    void ProcessSubscriptions();
    void Publish(const std::string &topic, google::protobuf::Message &message);
    void Subscribe(const std::string &topic, SubscriptionCallback callback);
    bool Subscribe(std::vector<std::string> endpoints);
    long long Time();
};

};
