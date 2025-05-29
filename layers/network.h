// layers/network.h
#ifndef NETWORK_H
#define NETWORK_H
#include <string>

namespace Network {
    std::string Send(const std::string &data);
    std::string Receive(const std::string &data);
    extern std::string buffer;
}

#endif