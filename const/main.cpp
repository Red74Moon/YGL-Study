#include <iostream>

using namespace std;

int main()
{
	char* b = "abc";

	cout << b << endl;

	cout << &b << endl;

	b = "aaa";

	cout << b << endl;

	cout << &b << endl;

	return 0;
}