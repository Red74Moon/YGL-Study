// ������ 11-6
#include "Students.h"

int main()
{
	Person person(11111111);
	std::cout << "Person ��ü�� ���� : " << std::endl;
	person.print();
	std::cout << std::endl;

	Students students(222, 3.9);
	std::cout << "Student ��ü�� ���� : " << std::endl;
	students.print();
	std::cout << std::endl;
	return 0;
}