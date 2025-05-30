/** 
CSC4750 Computer Networks 
Internet Protocol Stack Simulation Assignment
Pf. Dennis Vickers
05/09/2025
**/

#include "link.h"
#include <iostream>

namespace Link {
    std::string Send(const std::string& data) {
        std::cout << "[Link Layer] Sending: " << data << "\n";
        return "LINK_HDR|" + data;
    }

    std::string Receive(const std::string& data) {
        std::cout << "[Link Layer] Receiving: " << data << "\n";
        return data.substr(data.find('|') + 1);
    }
}
