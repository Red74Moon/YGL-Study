// strpbrk

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	char str[] = "Hello friends of mine.";

	char* pPtr = strpbrk(str, "pfmd");

	cout << "ã�� ���� : " << *pPtr << endl;
	cout << "�ش� ������ �δ콺 : " << pPtr - str;

	return 0;
}