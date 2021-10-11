#include <iostream>

using namespace std;
//Call by Address 
//swap(&a, &b);
int swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	cout << "Swap 함수 내의 a(&a),b(&b) 주소 : " << &a << ", " << &b << endl;
	cout << "Swap 함수 내의 a,b   저장된 주소 : " << a << ", " << b << endl;
	cout << "Swap 함수 내의 a(*a),b(*b)   값 : " << *a << ", " << *b << endl;
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
	cout << "Swap 함수 내의 a(&a),b(&b) 주소 : " << &a << ", " << &b << endl;
	cout << "Swap 함수 내의 a,b           값 : " << a << ", " << b << endl;
	cout << endl << endl;

	return 0;
}

int main()
{
	int a = 30;
	int b = 70;

	cout << "main 함수 내의 a,b  주소 : " << &a << ", " << &b << endl;
	cout << "main 함수 내의 a,b    값 :" << a << ", " << b << endl;
	cout << endl << endl;

	cout << "swap 함수 실생 전 : a = " << a << ", b = " << b << endl;
	cout << endl << endl;
	swap(a, b);
	cout << "swap 함수 실행 후 : a = " << a << ", b = " << b << endl;
	cout << endl << endl;

	return 0;
}