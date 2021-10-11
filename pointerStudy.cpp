#include <iostream>

using namespace std;
//Call by Address 
//swap(&a, &b);
int swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	cout << "Swap �Լ� ���� a(&a),b(&b) �ּ� : " << &a << ", " << &b << endl;
	cout << "Swap �Լ� ���� a,b   ����� �ּ� : " << a << ", " << b << endl;
	cout << "Swap �Լ� ���� a(*a),b(*b)   �� : " << *a << ", " << *b << endl;
	cout << endl << endl;

	return 0;
}


//Call by Reference
//swap(a, b);
int swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "Swap �Լ� ���� a(&a),b(&b) �ּ� : " << &a << ", " << &b << endl;
	cout << "Swap �Լ� ���� a,b           �� : " << a << ", " << b << endl;
	cout << endl << endl;

	return 0;
}

int main()
{
	int a = 30;
	int b = 70;

	cout << "main �Լ� ���� a,b  �ּ� : " << &a << ", " << &b << endl;
	cout << "main �Լ� ���� a,b    �� :" << a << ", " << b << endl;
	cout << endl << endl;

	cout << "swap �Լ� �ǻ� �� : a = " << a << ", b = " << b << endl;
	cout << endl << endl;
	swap(a, b);
	cout << "swap �Լ� ���� �� : a = " << a << ", b = " << b << endl;
	cout << endl << endl;

	return 0;
}