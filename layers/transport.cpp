// layers/transport.cpp
#include "transport.h"
#include <iostream>

namespace Transport {
    std::string buffer;

    std::string Send(const std::string &data) {
        buffer = "TRAN_HDR|" + data;
        std::cout << "[Transport Layer] Sending: " << buffer << std::endl;
        return buffer;
    }

    std::string Receive(const std::string &tranData) {
        buffer = tranData.substr(tranData.find("|") + 1);
        std::cout << "[Transport Layer] Received: " << buffer << std::endl;
        return buffer;
    }
}
