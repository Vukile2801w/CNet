#include "CNet/CNet.h"



void main() {

	//SocketBase* socket = new SocketBase();

	SocketBase::InitializePlatform();

	SocketBase::CleanupPlatform();
}
