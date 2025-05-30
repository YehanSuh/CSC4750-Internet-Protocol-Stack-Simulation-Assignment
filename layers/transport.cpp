/** 
CSC4750 Computer Networks 
Internet Protocol Stack Simulation Assignment
Pf. Dennis Vickers
05/09/2025
**/

#include "transport.h"
#include <iostream>

namespace Transport {
    std::string Send(const std::string& data) {
        std::cout << "[Transport Layer] Sending: " << data << "\n";
        return "TRANS_HDR|" + data;
    }

    std::string Receive(const std::string& data) {
        std::cout << "[Transport Layer] Receiving: " << data << "\n";
        return data.substr(data.find('|') + 1);
    }
}
