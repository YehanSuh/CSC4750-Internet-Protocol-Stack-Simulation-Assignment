# CSC4750-Internet-Protocol-Stack-Simulation-Assignment
## WHAT EACH LAYER DOES?
1. **main.cpp**  
   - The starting point of the program.  
   - Simulates sending a message through all four network layers and receiving it back.  
   - Calls each layer’s Send() and Receive() functions.

2. **application.h / application.cpp**  
   - Represents the Application Layer.  
   - Adds the header `APP_HDR|` to the message.  
   - Removes the same header during message reception.

3. **transport.h / transport.cpp**  
   - Represents the Transport Layer.  
   - Adds the header `TRANS_HDR|`.  
   - Removes it when receiving.

4. **network.h / network.cpp**  
   - Represents the Network Layer.  
   - Adds the header `NET_HDR|`.  
   - Removes it on reception.

5. **layers/link.h / link.cpp**  
   - Represents the Link Layer.  
   - Adds the final header `LINK_HDR|`.  
   - Removes it on the way back.

---

## HOW TO RUN?

1. **In WSL terminal, compile with:**  
   `g++ -std=c++17 -o network_sim main.cpp layers/application.cpp layers/transport.cpp layers/network.cpp layers/link.cpp`

2. **Run the program with:**  
   `./network_sim`

