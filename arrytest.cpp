
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Arr[10]; // 포인터 변수 선언

	int arr_size; // 배열의 크기를 입력받을 변수

	//string orgNums;

	//cout << "입력할 정수의 개수를 입력하세요 : ";

	//cin >> arr_size; // 배열의 크기를 입력받음

	//Arr = new int[arr_size]; // 입력받은 크기만큼 배열을 동적 생성

	//if (!Arr)
	//{
	//	cout << "메모리를 할당할 수 없습니다." << endl;
	//	return 0;
	//}

	int Sum = 0;

	//if (arr_size <= 0) {
	//	cout << "입력된 값이 없습니다." << endl << endl;
	//	return 0;
	//}

	cout << "입력할 정수 10개 만큼 입력하세요.(스페이스로 구분)" << endl;

	for (int i = 0; i < 10; ++i)
	{
		cin >> Arr[i];
	}

	////배열에 입력된 값 더하기
	//for (int i = 0; i < arr_size; ++i)
	//{
	//	Sum += Arr[i];
	//}
	//cout << endl << endl;
	//cout << "입력된 값 ";
	for (int i = 0; i < 10; ++i)
	{
		cout << Arr[i] << " ";
	}
	//cout << " 의 합은 ";
	//cout << Sum << " 입니다." << endl;
//END:
	//delete[] Arr;

	return 0;
}

