#include <iostream>

using namespace std;

class Character
{
public:
	Character(int _hp)
	{
		hp = _hp;
	}

private:
	int hp;

public:
	int getHp();

	friend void operator+=(Character& character, int hp);
};


int main()
{
	Character mario(150), mario2(0);
	mario += 50;
	mario2 = mario;

	cout << mario2.getHp() << endl;
	return 0;
}

int Character::getHp()
{
	return hp;
}

void operator+=(Character& character, int hp)
{
	character.hp += hp;
}
