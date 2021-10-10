#include <iostream>

using namespace std;

class Character
{
public:
	Character(int _hp)
	{
		hp = _hp;
	}
	Character(Character& _Character)
	{
		hp = _Character.hp;
	}

	int getHp();

private:
	int hp;
};

int main()
{
	Character mario(100);
	cout << mario.getHp() << endl;

	Character luigi(mario);
	cout << luigi.getHp() << endl;

	return 0;
}

int Character::getHp()
{
	return hp;
}
