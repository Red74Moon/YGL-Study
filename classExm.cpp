#include <iostream>

using namespace std;

class Charcter
{
public:
	int hp;
	int speed;
	string name;
	void move(int dir);
	void jump();
	void hit();
};

int main()
{
	Charcter mario;

	mario.name = "½´ÆÛ¸¶¸®¿À";
	mario.jump();
	return 0;
}

void Charcter::move(int dir)
{
}

void Charcter::jump()
{
}

void Charcter::hit()
{
}
