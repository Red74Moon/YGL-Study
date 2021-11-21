#include <iostream>
#include <cassert>

using namespace std;

class Rectangle
{
private:
	double length;
	double height;
public:
	Rectangle(double length, double height);
	Rectangle(const Rectangle& rect);
	~Rectangle();
	void print() const;
	double getArea() const;
	double getPerimeter() const;
};

Rectangle::Rectangle(double length, double height)
{
	if ((length <= 0.0) || (height <= 0.0))
	{
		cout << "Rectangle ��ü�� ������ �� �����ϴ�." << endl;
		assert(false);
	}
}

Rectangle::Rectangle(const Rectangle& rect)
{
}

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

int Rectangle::getCount()
{
	return 0;
}

void Rectangle::print() const
{
	cout << "�簢���� �ʺ� : " << length << ", ���� : " << height << endl;
}

double Rectangle::getArea() const
{
	return (length * height);
}

double Rectangle::getPerimeter() const
{
	return (2 * (length + height));
}

int main()
{
	Rectangle rect1(3.0, 4.2);
	Rectangle rect2(5.1, 10.2);
	Rectangle rect3(rect2);

	cout << "�簢��1: ";
	rect1.print();
	cout << "���� : " << rect1.getArea() << endl;
	cout << "�ѷ� : " << rect1.getPerimeter() << endl << endl;

	cout << "�簢��2: ";
	rect2.print();
	cout << "���� : " << rect2.getArea() << endl;
	cout << "�ѷ� : " << rect2.getPerimeter() << endl << endl;

	cout << "�簢��3: ";
	rect3.print();
	cout << "���� : " << rect3.getArea() << endl;
	cout << "�ѷ� : " << rect3.getPerimeter() << endl << endl;

	return 0;
}