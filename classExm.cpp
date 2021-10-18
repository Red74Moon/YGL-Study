//포르잔 C++ : Class11-1


#include <iostream>
#include <cassert>
#include <string>

using namespace std;

class Person
{
private:
	long identity;
public:
	void setID(long identity);
	int getID();
};

class Student : public Person
{
private:
	double gpa;
public:
	void setGPA(double gpa);
	double getGPA();
};

int main()
{
	Person person;

	person.setID(111111111L);
	cout << "Person 객체의 정보 : " << endl;
	cout << "사람의 구분 번호 : " << person.getID();
	cout << endl << endl;

	Student student;
	student.setID(222222222L);
	student.setGPA(3.9);
	cout << "Student 객체의 정보 : " << endl;
	cout << "학생의 구분 번호 : " << student.getID() << endl;
	cout << "학생의 학점 : " << student.getGPA() << endl;

	return 0;
}

void Person::setID(long id)
{
	identity = id;
	assert(identity >= 100000000 && identity <= 999999999);
}

int Person::getID()
{
	return identity;
}

void Student::setGPA(double gp)
{
	gpa = gp;
	assert(gpa >= 0 && gpa <= 4.0);
}

double Student::getGPA()
{
	return gpa;
}
