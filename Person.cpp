//Æ÷¸£ÀÜ 11-2

#include "Person.h"

Person::Person()
{
}

Person::Person(long identity)
{
	assert(identity >= 100 && identity <= 999);
}

Person::~Person()
{
}

Person::Person(Person& person)
{
}

void Person::print() const
{
	std::cout << "Identity : " << identity << std::endl;
}
