/** 
CSC4750 Computer Networks 
Internet Protocol Stack Simulation Assignment
Pf. Dennis Vickers
05/09/2025
**/

#include "application.h"
#include <iostream>

namespace Application {
    std::string Send(const std::string& data) {
        std::cout << "[Application Layer] Sending: " << data << "\n";
        return "APP_HDR|" + data;
    }

    std::string Receive(const std::string& data) {
        std::cout << "[Application Layer] Receiving: " << data << "\n";
        return data.substr(data.find('|') + 1);
    }
}
