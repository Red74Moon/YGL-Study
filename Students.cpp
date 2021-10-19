//Æ÷¸£ÀÜ 11-2

#include "Students.h"
#include <iostream>

using namespace std;

Students::Students()
{
}

Students::~Students()
{
}

Students::Students(long identity, double gpa)
{
	assert(gpa >= 0.0 && gpa <= 4.0);
}

Students::Students(const Students& students)
{
}

void Students::print() const
{
	Person::print();
	cout << "GPA : " << fixed << setprecision(2) << gpa << endl;
}
