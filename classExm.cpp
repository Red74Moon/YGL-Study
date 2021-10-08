//클래스 내에서만 접근이 가능한 HP, MP, Skill를 가진 Monster 클래스를 만든다.
// HP, MP, Skill 멤버 변수는 이름이 Info인 멤버 함수를 통해 값을 입력받아 출력된다.
//멤버 함수는 클래스 외부에서도 접근이 가능하다.
//
//Monster1을 만들어 멤버 함수 Info 를 통해  
//HP는 100 MP는 50, Skill 이름은 ThunderBolt를 대입하여 출력하시오.


#include <iostream>
#include <cstring>

using namespace std;

class Monster
{
public:
	Monster();
	~Monster();
	void Info(int, int, string);

private:
	int HP;
	int MP;
	string Skill;
};

int main()
{
	Monster Monster1;

	Monster1.Info(100, 50, "ThunderBolt");

	return 0;
}

Monster::Monster()
{
}

Monster::~Monster()
{
}

void Monster::Info(int i, int j, string c)
{
	HP = i;
	MP = j;
	Skill = c;
	cout << i << '\t' << j << '\t' << c << endl;
}
