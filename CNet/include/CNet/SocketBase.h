#pragma once

#ifdef _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "Ws2_32.lib")
typedef SOCKET SocketHandle;
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
typedef int SocketHandle;
#endif

#include <iostream>


class SocketBase
{
protected:
	SocketHandle socket;
	std::string addr;
	int port;
public:

	SocketBase() {
		throw "Not Implemented!";
	}

	void Close();

	bool IsConnnected() const;

	static int InitializePlatform();

	static void CleanupPlatform();

};

