//Ŭ���� �������� ������ ������ HP, MP, Skill�� ���� Monster Ŭ������ �����.
// HP, MP, Skill ��� ������ �̸��� Info�� ��� �Լ��� ���� ���� �Է¹޾� ��µȴ�.
//��� �Լ��� Ŭ���� �ܺο����� ������ �����ϴ�.
//
//Monster1�� ����� ��� �Լ� Info �� ����  
//HP�� 100 MP�� 50, Skill �̸��� ThunderBolt�� �����Ͽ� ����Ͻÿ�.


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
