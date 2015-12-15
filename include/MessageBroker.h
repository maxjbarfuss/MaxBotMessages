#pragma once

#include <thread>
#include <tuple>
#include <chrono>

#include <google/protobuf/message.h>
#include <zmq.hpp>

#include <IMessageBroker.h>
#include <Multicast.h>

namespace MaxBotMessages {

class MessageBroker : public IMessageBroker {

#define PUBLISHER_RANGE         1000
#define BIND_RETRIES            10
#define MULTICAST_TIMES         5
#define MULTICAST_WAIT          100

private:
    std::string                                                             _groupId;
    zmq::context_t                                                          _context;
    zmq::socket_t                                                           _publisher;
    std::vector<std::tuple<std::string, std::unique_ptr<zmq::socket_t>>>    _subscribers;
    std::vector<std::tuple<std::string, SubscriptionCallback>>              _subscriptions;
    int                                                                     _publisherPort;
    Multicast                                                               _multicast;
    std::chrono::time_point<std::chrono::high_resolution_clock>             _epoch;
    int                                                                     _workSteps;
private:
    void BindPublisherAndLocalSubscriber();
    void ProcessSubscriptions();
    bool SubsriptionExists(std::string& endpoint);
    void SendMulticast();
    void ProccessMulticast();
public:
    MessageBroker(const std::string &groupId, int threadPoolSize);
    ~MessageBroker();
    void Publish(const std::string &topic, google::protobuf::Message &message);
    void Subscribe(const std::string &topic, SubscriptionCallback callback);
    void DoWork();
    int MillisecondsSinceEpoch();
};

};
