
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Arr[10]; // ������ ���� ����

	int arr_size; // �迭�� ũ�⸦ �Է¹��� ����

	//string orgNums;

	//cout << "�Է��� ������ ������ �Է��ϼ��� : ";

	//cin >> arr_size; // �迭�� ũ�⸦ �Է¹���

	//Arr = new int[arr_size]; // �Է¹��� ũ�⸸ŭ �迭�� ���� ����

	//if (!Arr)
	//{
	//	cout << "�޸𸮸� �Ҵ��� �� �����ϴ�." << endl;
	//	return 0;
	//}

	int Sum = 0;

	//if (arr_size <= 0) {
	//	cout << "�Էµ� ���� �����ϴ�." << endl << endl;
	//	return 0;
	//}

	cout << "�Է��� ���� 10�� ��ŭ �Է��ϼ���.(�����̽��� ����)" << endl;

	for (int i = 0; i < 10; ++i)
	{
		cin >> Arr[i];
	}

	////�迭�� �Էµ� �� ���ϱ�
	//for (int i = 0; i < arr_size; ++i)
	//{
	//	Sum += Arr[i];
	//}
	//cout << endl << endl;
	//cout << "�Էµ� �� ";
	for (int i = 0; i < 10; ++i)
	{
		cout << Arr[i] << " ";
	}
	//cout << " �� ���� ";
	//cout << Sum << " �Դϴ�." << endl;
//END:
	//delete[] Arr;

	return 0;
}

