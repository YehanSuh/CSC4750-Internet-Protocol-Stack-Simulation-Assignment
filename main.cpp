 /** CSC4750 Computer Networks 
Internet Protocol Stack Simulation Assignment
Pf. Dennis Vickers
05/29/2025*/


#include <iostream>
#include <string>
#include "layers/application.h"
#include "layers/transport.h"
#include "layers/network.h"
#include "layers/link.h"

int main() {
    std::string data = "Hello, Network!";

    std::cout << "Message sent: " << data << "\n";
    std::cout << "==== Sending ====\n";

    data = Application::Send(data);
    data = Transport::Send(data);
    data = Network::Send(data);
    data = Link::Send(data);

    std::cout << "==== Receiving ====\n";

    data = Link::Receive(data);
    data = Network::Receive(data);
    data = Transport::Receive(data);
    data = Application::Receive(data);

    std::cout << "Final message received: " << data << "\n";
    return 0;
}
/** sample output */
/**Message sent: Hello, Network!
==== Sending ====
[Application Layer] Sending: Hello, Network!
[Transport Layer] Sending: APP_HDR|Hello, Network!
[Network Layer] Sending: TRANS_HDR|APP_HDR|Hello, Network!
[Link Layer] Sending: NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!
==== Receiving ====
[Link Layer] Receiving: LINK_HDR|NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!
[Network Layer] Receiving: NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!
[Transport Layer] Receiving: TRANS_HDR|APP_HDR|Hello, Network!
[Application Layer] Receiving: APP_HDR|Hello, Network!
Final message received: Hello, Network!*/
