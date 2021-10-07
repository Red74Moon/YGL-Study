//int 타입의 벡터 abc를 생성하고, 차례대로 10, 15, 20의 값을 넣고 출력하시오.
//(push_back)함수 사용하기

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> Vec;

	Vec.push_back(10);
	Vec.push_back(15);
	Vec.push_back(20);

	for (int i = 0; i < Vec.size(); ++i)
	{
		cout << Vec[i] << endl;
	}

	return 0;
}