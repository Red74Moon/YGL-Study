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
	cout << "엄마 생성자" << endl;
}

Mom::~Mom()
{
	cout << "엄마 소멸자" << endl;
}

Son::Son()
{
	cout << "아들 생성자" << endl;
}

Son::~Son()
{
	cout << "아들 소멸자" << endl;
}
