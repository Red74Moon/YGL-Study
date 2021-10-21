//Æ÷¸£ÀÜ 11-2

#pragma once

#include <cassert>
#include <iostream>
#include <iomanip>

class Person
{
private:
	long identity;
public:
	Person();
	Person(long identity);
	~Person();
	Person(Person& person);
	void print() const;
};