// 국어 / 영어 / 수학 / 과학 시험 점수를 입력받는다.
// 그 중에 최댓값을 골라 M이라고 한다.
// 그리고 나서 모든 점수를 점수 / M100으로 고쳤다.
//
// 예를 들어, 최고점이 70이고, 수학점수가 50이었으면 
// 수학점수는 50 / 70100이 되어 71.43점이 된다.
//
//성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.

#include <iostream>

using namespace std;

int main()
{
	// 점수가 입력 될 배열
	int Arr[4] = {};

	// 과목 배열
	string ClassArr[4] = { "국어", "영어", "수학" , "과학" };

	// 새로운 점수들의 합계 변수
	float Sum = 0.0; 

	cout << "국어 점수를 입력하세요 : ";
	cin >> Arr[0]; //Korean
	cout << "영어 점수를 입력하세요 : ";
	cin >> Arr[1]; //English
	cout << "수학 점수를 입력하세요 : ";
	cin >> Arr[2]; //Mathematics
	cout << "과학 점수를 입력하세요 : ";
	cin >> Arr[3]; //Science

	cout << endl;

	//입력된 점수들의 최대점수 구하기
	int Max = Arr[0];
	for (int i = 0; i < 4; ++i)
	{
		if (Max < Arr[i])
		{
			Max = Arr[i];
		}
	}

	cout << endl << "최고 점수는 " << Max << "입니다. 이 점수를 기준으로 " << endl<< endl;;

	//과목별 점수 재계산
	//모든 점수를 (점수 / 최대점수 ) * 100으로 새롭게 평균을 내어 출력 후 배열에 입력
	for (int i = 0; i < 4; ++i)
	{
		float newAvgr = (Arr[i] / (float)Max) * 100;
		cout << ClassArr[i] << "의 새로운 점수는 " << newAvgr << "입니다. " << endl;
		Arr[i] = newAvgr;
	}
	
	// 배열에 입력된 점수들의 총 합
	for (int i = 0; i < 4; ++i)
	{
		Sum += Arr[i];
	}

	cout << endl << endl << "새로운 점수들의 평균은 " <<  Sum / 4 << "점 입니다." << endl << endl;

	return 0;
}