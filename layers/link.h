#ifndef LINK_H
#define LINK_H

#include <string>

class Link {
public:
    static std::string Send(const std::string& data);
    static std::string Receive(const std::string& data);
};

#endif // LINK_H
