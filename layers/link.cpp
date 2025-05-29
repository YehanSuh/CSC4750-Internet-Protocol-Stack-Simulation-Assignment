#include "link.h"
#include <iostream>

std::string Link::Send(const std::string& data) {
    std::string framedData = "LINK_HDR|" + data;
    std::cout << "[Link Layer] Sending: " << framedData << std::endl;
    return framedData;
}

std::string Link::Receive(const std::string& data) {
    std::cout << "[Link Layer] Receiving: " << data << std::endl;
    std::string payload = data.substr(data.find('|') + 1); // Strip LINK_HDR|
    return payload;
}
