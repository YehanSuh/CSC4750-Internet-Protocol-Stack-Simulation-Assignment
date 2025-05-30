/** 
CSC4750 Computer Networks 
Internet Protocol Stack Simulation Assignment
Pf. Dennis Vickers
05/09/2025
**/

#include "network.h"
#include <iostream>

namespace Network {
    std::string Send(const std::string& data) {
        std::cout << "[Network Layer] Sending: " << data << "\n";
        return "NET_HDR|" + data;
    }

    std::string Receive(const std::string& data) {
        std::cout << "[Network Layer] Receiving: " << data << "\n";
        return data.substr(data.find('|') + 1);
    }
}
