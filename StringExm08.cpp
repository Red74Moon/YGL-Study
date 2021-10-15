// strpbrk

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	char str[] = "Hello friends of mine.";

	char* pPtr = strpbrk(str, "pfmd");

	cout << "찾은 문자 : " << *pPtr << endl;
	cout << "해당 문자의 인댁스 : " << pPtr - str;

	return 0;
}