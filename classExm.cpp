#include <iostream>

using namespace std;

class Weapon
{
public:
	void Attack()
	{
		cout << "����� ����" << endl;
	};
protected:
	int power;
};

class Knife : public Weapon
{
public:
	void Attack()
	{
		cout << "Į�� ����" << endl;
	};
};

int main()
{
	Weapon* weapon = new Knife();

	((Knife*)weapon)->Attack();

	delete weapon;

	return 0;
}


