#include "CNet/SocketBase.h"


int SocketBase::InitializePlatform() {
#ifdef _WIN32 // If build is on windows

	WSADATA wsaData;
	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);

    if (iResult != 0) {
        // Handle the error, e.g., print an error message and exit
        // You can get more specific error information using WSAGetLastError()
        return 1; // Or handle the error appropriately
    }

    std::cout << "Winsock initialized successfully." << std::endl;
    std::cout << "System Status: " << wsaData.szSystemStatus << std::endl;

    return 0;

#endif // UNIX dont need setup


    return 0;
}


void SocketBase::CleanupPlatform() {
#ifdef _WIN32 // If build is on windows

    WSACleanup();
    std::cout << "Winsock cleaned up." << std::endl;

#endif // UNIX dont need cleanup
}