#include <cassert>
#include <cstring>

#include <Multicast.h>

namespace MaxBotMessages {

Multicast::Multicast() : _notifySocket(0), _localIp(GetLocalIp()) {
    /*** _notifySocket Setup ***/
    struct in_addr localInterface;
    _notifySocket = socket(AF_INET, SOCK_DGRAM, 0);
    assert (_notifySocket >= 0);
    memset((char*) &_groupSock, 0, sizeof(_groupSock));
    _groupSock.sin_family = AF_INET;
    _groupSock.sin_addr.s_addr = inet_addr(BROADCAST_ADDRESS);
    _groupSock.sin_port = htons(BROADCAST_PORT);
    localInterface.s_addr = inet_addr(_localIp.data());
    assert(setsockopt(_notifySocket, IPPROTO_IP, IP_MULTICAST_IF, (char*)&localInterface, sizeof(localInterface)) >= 0);
    /*** _getNotificationsSocket Setup ***/
    _getNotificationsSocket = socket(AF_INET, SOCK_DGRAM, 0);
    assert(_getNotificationsSocket >= 0);
    int reuse = 1;
    assert(setsockopt(_getNotificationsSocket, SOL_SOCKET, SO_REUSEADDR, (char *)&reuse, sizeof(reuse)) >= 0);
    struct sockaddr_in  localSock;
    memset((char*)&localSock, 0, sizeof(localSock));
    localSock.sin_family = AF_INET;
    localSock.sin_port = htons(BROADCAST_PORT);
    localSock.sin_addr.s_addr = INADDR_ANY;
    assert(bind(_getNotificationsSocket, (struct sockaddr*)&localSock, sizeof(localSock)) >= 0);
    struct ip_mreq group;
    group.imr_multiaddr.s_addr = inet_addr(BROADCAST_ADDRESS);
    group.imr_interface.s_addr = inet_addr(GetLocalIp().data());
    assert(setsockopt(_getNotificationsSocket, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&group, sizeof(group)) >= 0);
    fcntl(_getNotificationsSocket, F_SETFL, O_NONBLOCK);
}

Multicast::~Multicast() {}

void Multicast::Notify(int port) {
    char databuf[MESSAGE_SIZE];
    strcpy(databuf,(_localIp + ":" + std::to_string(port)).data());
    int datalen = sizeof(databuf);
    assert(sendto(_notifySocket, databuf, datalen, 0, (struct sockaddr*)&_groupSock, sizeof(_groupSock)) >= 0);
}

std::vector<std::string> Multicast::GetNotifications() {
    int datalen;
    char databuf[MESSAGE_SIZE];
    datalen = sizeof(databuf);
    std::vector<std::string> retVal;
    while(read(_getNotificationsSocket, databuf, datalen) >= 0)
        retVal.push_back(std::string (databuf));
    return retVal;
}

}
