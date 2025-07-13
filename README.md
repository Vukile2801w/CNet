# CNet – C++ Networking Framework

**CNet** is a lightweight, cross-platform networking framework written in modern C++, inspired by C#'s `System.Net` and Python's `socket` module.

It provides a clean and intuitive API for creating TCP clients and servers, allowing you to build networked applications quickly and with minimal boilerplate.

---

## ✨ Features

- ✅ Simple and modern C++ API
- ✅ TCP client and server support
- ✅ Cross-platform (Windows / Linux)
- ✅ Inspired by high-level frameworks like System.Net and socket
- ✅ Easy to extend (UDP, TLS, packet system, etc.)

---

## 🔧 Usage Example

### TCP Client
```cpp
#include <CNet/TcpClient.h>

int main() {
    CNet::TcpClient client("127.0.0.1", 8080);
    client.Send("Hello, server!");
    std::string response = client.Receive();
    std::cout << "Server says: " << response << std::endl;
}
