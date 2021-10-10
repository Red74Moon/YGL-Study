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
	void operator+=(int hp);
};


int main()
{
	Character mario(150);
	mario += 50;

	cout << mario.getHp() << endl;
	return 0;
}

int Character::getHp()
{
	return hp;
}

void Character::operator+=(int hp)
{
	this->hp += hp;
}
