// Æ÷¸£ÀÜ 11-6
#include "Students.h"

int main()
{
	Person person(11111111);
	std::cout << "Person °´Ã¼ÀÇ Á¤º¸ : " << std::endl;
	person.print();
	std::cout << std::endl;

	Students students(222, 3.9);
	std::cout << "Student °´Ã¼ÀÇ Á¤º¸ : " << std::endl;
	students.print();
	std::cout << std::endl;
	return 0;
}