#include <iostream>

using namespace std;

class Mom
{
public:
	Mom();
	~Mom();
};

class Son : public Mom
{
public:
	Son();
	~Son();
private:
};

int main()
{
	Son son;

	return 0;
}

Mom::Mom()
{
	cout << "���� ������" << endl;
}

Mom::~Mom()
{
	cout << "���� �Ҹ���" << endl;
}

Son::Son()
{
	cout << "�Ƶ� ������" << endl;
}

Son::~Son()
{
	cout << "�Ƶ� �Ҹ���" << endl;
}
