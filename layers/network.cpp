// layers/network.cpp
#include "network.h"
#include <iostream>

namespace Network {
    std::string buffer;

    std::string Send(const std::string &data) {
        buffer = "NET_HDR|" + data;
        std::cout << "[Network Layer] Sending: " << buffer << std::endl;
        return buffer;
    }

    std::string Receive(const std::string &netData) {
        buffer = netData.substr(netData.find("|") + 1);
        std::cout << "[Network Layer] Received: " << buffer << std::endl;
        return buffer;
    }
}