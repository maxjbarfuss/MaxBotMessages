#pragma once

#include <functional>

#include <google/protobuf/message.h>

namespace MaxBotMessages {

class IMessageBroker
{
public:
    typedef std::function<void (const std::string&)> SubscriptionCallback;
public:
    virtual ~IMessageBroker() {};
    virtual void Publish(const std::string &topic, google::protobuf::Message &message) = 0;
    virtual void Subscribe(const std::string &topic, SubscriptionCallback callback) = 0;
    virtual void DoWork() = 0;
    virtual long MicrosecondsSinceEpoch() = 0;
};

};
