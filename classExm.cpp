#include <iostream>

using namespace std;

class Weapon
{
public:
	void Attack()
	{
		cout << "무기로 공격" << endl;
	};
protected:
	int power;
};

class Knife : public Weapon
{
public:
	void Attack()
	{
		cout << "칼로 공격" << endl;
	};
};

int main()
{
	Weapon* weapon = new Knife();

	((Knife*)weapon)->Attack();

	delete weapon;

	return 0;
}


