//int Ÿ���� ���� abc�� �����ϰ�, ���ʴ�� 10, 15, 20�� ���� �ְ� ����Ͻÿ�.
//(push_back)�Լ� ����ϱ�

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