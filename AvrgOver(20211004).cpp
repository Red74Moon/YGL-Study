//https://www.acmicpc.net/problem/4344
// 첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
//
//둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 
//이어서 N명의 점수가 주어진다.점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
// 
// 입력
//5
//5 50 50 70 80 100
//7 100 95 90 80 70 60 50
//3 70 90 80
//3 70 90 81
//9 100 99 98 97 96 95 94 93 91
// 
// 출력
//40.000 %
//57.143 %
//33.333 %
//66.667 %
//55.556 %

#include <iostream>

using namespace std;

int main()
{
	int testCase;

	cout << "테스트 할 수를 적으세요 : ";
	cin >> testCase;
	cout << "학생 수와 점수를 입력하세요(5 50 50 70 80 100)" << endl;

	char Score[100];

	for (int i = 1; i < testCase; ++i)
	{
		cin.getline(Score, 100, '\n');
	}
	for (int i = 1; i < testCase; ++i)
	{
		cout << Score[i]; 
	}
	
	return 0;
}