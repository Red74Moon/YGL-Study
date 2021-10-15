// strtok

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[] = "2021³â 10¿ù 15ÀÏ";
	char* p;

	p = strtok(str, " ");
	while (p)
	{
		cout << p << endl;
		p = strtok(0, " ");
	}

	return 0;
}