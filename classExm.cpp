#include <iostream>

using namespace std;

class Character
{
public:
	Character* getThis();
};


int main()
{
	Character mario;
	Character* marioPtr = &mario;

	cout << "marioPtr  : " << marioPtr << endl;
	cout << "marioThis : " << mario.getThis() << endl;

	return 0;
}

Character* Character::getThis()
{
	return this;
}
