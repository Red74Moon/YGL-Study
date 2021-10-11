#include <iostream>

using namespace std;

int swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	return 0;
}

int main()
{
	int a = 30;
	int b = 70;

	swap(&a, &b);
	cout << a << b << endl;

	return 0;
}