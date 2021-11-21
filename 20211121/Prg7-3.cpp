#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RandomInteger
{
private:
	int low;
	int high;
	int value;
public:
	RandomInteger(int low, int high);
	~RandomInteger();

	RandomInteger(const RandomInteger& random) = delete;
	void print() const;
};

RandomInteger::RandomInteger(int low, int high)
{
	srand(time(0));
	int temp = rand();
	value = temp % (high - low + 1) + low;
}

RandomInteger::~RandomInteger()
{
}

void RandomInteger::print() const
{
	cout << value << endl;
}

int main()
{
	RandomInteger r1(100, 200);
	cout << "100~200 사이의 랜덤한 숫자 : ";
	r1.print();

	RandomInteger r2(400, 600);
	cout << "400~600 사이의 랜덤한 숫자 : ";
	r2.print();

	RandomInteger r3(1500, 2000);
	cout << "1500~2000 사이의 랜덤한 숫자 : ";
	r3.print();

	return 0;
}