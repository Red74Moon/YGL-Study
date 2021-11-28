#include <iostream>

using namespace std;

int main()
{
	//const char* a = "abc";

	//cout << a << endl;
	//cout << &a << endl;

	char a[] = "abc";

	char* b = &a[0];

	cout << a << endl;
	cout << b << endl;
	cout << &b << endl;

	return 0;
}