#include <iostream>
#include <WinSock2.h>

#pragma comment(lib, "ws2_32.lib")

using namespace std;

int main()
{
	WSAData wsaData;

	SOCKET hserverSocket;
	SOCKET hclientSocket;

	SOCKADDR_IN serverAddr;
	SOCKADDR_IN clientAddr;

	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
	{
		cout << "Error WSAStarup" << endl;
		exit(-1);
	}

	hserverSocket = socket(PF_INET, SOCK_STREAM, 0);
	if (hserverSocket == INVALID_SOCKET)
	{
		cout << "Error socket" << endl;
		exit(-1);
	}

	memset(&serverAddr, 0, sizeof(serverAddr));

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	serverAddr.sin_port = htons(9190);

	if (bind(hserverSocket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
	{
		cout << "Error bind" << endl;
		exit(-1);
	}

	if (listen(hserverSocket, 0) == SOCKET_ERROR)
	{
		cout << "Error Listen" << endl;
		exit(-1);
	}

	while (1)
	{
		int clientAddrSize = sizeof(clientAddr);
		hclientSocket = accept(hserverSocket, (SOCKADDR*)&clientAddr, &clientAddrSize);
		if (hclientSocket == SOCKET_ERROR)
		{
			cout << "Error accept" << endl;
			exit(-1);
		}

		cout << "client Connect : " << hclientSocket << endl;

		while (1)
		{
			char message[1024] = { 0, };
			char messageServer[1024] = { 0, };

			cout << "서버에서 보내는 내용 : ";
			cin >> messageServer;
			send(hserverSocket, messageServer, strlen(message) + 1, 0);

			int recvLengh = recv(hclientSocket, message, sizeof(message), 0);
			if (recvLengh == -1)
			{
				cout << "Client Disconnect : " << hclientSocket << endl;
				closesocket(hclientSocket);
				break;
			}
			cout << "Client Message : " << message << endl;

			send(hclientSocket, messageServer, recvLengh + 1, 0);
		}
		closesocket(hclientSocket);
		closesocket(hserverSocket);

		WSACleanup();
	}

	return 0;
}