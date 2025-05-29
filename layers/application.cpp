#include "application.h"
#include <iostream>

// Add an "APP_HDR|" to simulate application layer encapsulation
std::string application_send(const std::string& message) {
    std::cout << "[Application Layer] Sending: " << message << std::endl;
    return "APP_HDR|" + message;
}

// Strip the "APP_HDR|" to simulate decapsulation
std::string application_receive(const std::string& data) {
    std::cout << "[Application Layer] Received: " << data << std::endl;
    size_t pos = data.find('|');
    if (pos != std::string::npos) {
        return data.substr(pos + 1);
    }
    return data; // If no delimiter found, return as-is
}
