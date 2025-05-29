#ifndef APPLICATION_H
#define APPLICATION_H

#include <string>

// Encapsulates data with application layer header
std::string application_send(const std::string& message);

// Decapsulates data at the application layer
std::string application_receive(const std::string& data);

#endif // APPLICATION_H
