/*
	Client Program(TCP)
*/

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <WinSock2.h> // Windows
#include <iostream>

#pragma comment(lib, "ws2_32.lib")

using namespace std;

int main()
{
	WSAData	wsaData;

	SOCKET hServerSocket;

	SOCKADDR_IN serverAddr;

	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
	{
		cout << "Error WSASartup" << endl;
		exit(-1);
	}

	hServerSocket = socket(PF_INET, SOCK_STREAM, 0);
	if (hServerSocket == INVALID_SOCKET)
	{
		cout << "Error socket" << endl;
		exit(-1);
	}

	memset(&serverAddr, 0, sizeof(serverAddr));

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); 
	serverAddr.sin_port = htons(9190); // port

	if (connect(hServerSocket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
	{
		cout << "Error connect" << endl;
		exit(-1);
	}

	while (1)
	{
		char message[1024] = { 0, };

		cout << "서버로 보내는 내용 : ";
		cin >> message;
		send(hServerSocket, message, strlen(message) + 1, 0);

		int recvLength = recv(hServerSocket, message, sizeof(message), 0);
		if (recvLength == -1)
		{
			cout << "Error recv" << endl;
			exit(-1);
		}

		cout << "서버에서 받은 내용 : " << message << endl;
	}
	closesocket(hServerSocket); 

	WSACleanup();

	return 0;
}