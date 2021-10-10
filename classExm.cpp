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

	void speedUp();
	void obtainItem();
};

int main()
{
	Charcter mario;

	mario.name = "½´ÆÛ¸¶¸®¿À";
	mario.jump();

	mario.obtainItem();
	mario.speed += 10000;

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

void Charcter::speedUp()
{
	speed++;
}

void Charcter::obtainItem()
{
	speedUp();
}
