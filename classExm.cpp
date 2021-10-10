#include <iostream>

using namespace std;

class Charcter
{
private:
	int hp;

public:
	void setHp(int _hp);
	int getHp();
};

int main()
{
	Charcter mario;
	mario.setHp(100);
	cout << mario.getHp() << endl;
	return 0;
}

void Charcter::setHp(int _hp)
{
	hp = _hp;
}

int Charcter::getHp()
{
	return 0;
}
