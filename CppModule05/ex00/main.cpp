#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("bob", 2);
	b.increment();
	std::cout << b.getGrade() << std::endl;
}