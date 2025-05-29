#include <iostream>
#include <string>
#include "layers/transport.h"
#include "layers/network.h"
#include "layers/link.h"

int main() {
    std::string data = "Hello World!";

    // Encapsulation
    data = Transport::Send(data);
    data = Network::Send(data);
    data = Link::Send(data);

    std::cout << "\nTransmission complete!\n\n";

    // Decapsulation
    data = Link::Receive(data);
    data = Network::Receive(data);
    data = Transport::Receive(data);

    std::cout << "\nFinal payload received: " << data << "\n";
    return 0;
}


