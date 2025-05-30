#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>

namespace Transport {
    std::string Send(const std::string& data);
    std::string Receive(const std::string& data);
}

#endif
