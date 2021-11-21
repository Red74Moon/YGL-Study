#include <iostream>
#include <cassert>

using namespace std;

class Rectangle
{
private:
	double length;
	double height;
	static int count;
public:
	Rectangle(double length, double height);
	Rectangle(const Rectangle& rect);
	Rectangle();
	~Rectangle();

	static int getCount();
};

int Rectangle::count = 0;

Rectangle::Rectangle(double len, double hgt)
{
	count++;
}

Rectangle::Rectangle()
{
	count++;
}

Rectangle::Rectangle(const Rectangle& rect)
{
	count++;
}

Rectangle::~Rectangle()
{
	count--;
}

int Rectangle::getCount()
{
	return count;
}

int main()
{
	{
		Rectangle rect1(3.2, 1.2);
		Rectangle rect2(1.5, 2.1);
		Rectangle rect3;
		Rectangle rect4(rect1);
		Rectangle rect5(rect2);

		cout << "°´Ã¼ÀÇ ¼ö : " << rect5.getCount() << endl;
	}
	cout << "°´Ã¼ÀÇ ¼ö : " << Rectangle::getCount() << endl;

	return 0;
}