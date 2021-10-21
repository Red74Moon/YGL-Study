//Æ÷¸£ÀÜ 11-2

#pragma once
#include "Person.h"

class Students : public Person
{
private:
	double gpa = 0.0;
public:
	Students();
	~Students();
	Students(long identity, double gpa);
	Students(const Students& students);
	void print() const;

};

