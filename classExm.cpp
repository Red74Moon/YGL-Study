#include <iostream>

using namespace std;

class Charcter
{
public:
	Charcter();
	~Charcter();
	Charcter(int hp);
	void setHp(int _hp);
	int getHp();
private:
	int hp;

};

int main()
{
	Charcter mario;
	mario.setHp(100);
	cout << mario.getHp() << endl;
	return 0;
}

Charcter::Charcter()
{
	hp = 100;
}

Charcter::~Charcter()
{
}


Charcter::Charcter(int _hp)
{
	hp = _hp;
}

void Charcter::setHp(int _hp)
{
	hp = _hp;
}

int Charcter::getHp()
{
	return 0;
}
