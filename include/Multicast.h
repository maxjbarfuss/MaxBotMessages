#pragma once

#include <string>
#include <vector>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <ifaddrs.h>
#include <unistd.h>
#include <fcntl.h>

namespace MaxBotMessages {

#define BROADCAST_ADDRESS       "226.1.1.1"
#define BROADCAST_PORT          12321
#define MESSAGE_SIZE            22              //size of ip address + port in the form of 192.168.101.222:99999

class Multicast {
public:
    static std::string GetLocalIp() {
        struct ifaddrs* ifAddrStruct=NULL;
        void* tmpAddrPtr=NULL;
        std::string retVal;
        getifaddrs(&ifAddrStruct);
        for (ifaddrs* ifa = ifAddrStruct; ifa != NULL; ifa = ifa->ifa_next) {
            if (!ifa->ifa_addr) continue;
            if (ifa->ifa_addr->sa_family == AF_INET) {
                tmpAddrPtr=&((struct sockaddr_in*)ifa->ifa_addr)->sin_addr;
                char addressBuffer[INET_ADDRSTRLEN];
                inet_ntop(AF_INET, tmpAddrPtr, addressBuffer, INET_ADDRSTRLEN);
                retVal.assign(addressBuffer);
            }
        }
        if (ifAddrStruct!=NULL) freeifaddrs(ifAddrStruct);
        return retVal;
    }

private:
    int                 _getNotificationsSocket;
    int                 _notifySocket;
    struct sockaddr_in  _groupSock;
    std::string         _localIp;

public:
    Multicast();
    ~Multicast();
    void Notify(int port);
    std::vector<std::string> GetNotifications();

};

}
