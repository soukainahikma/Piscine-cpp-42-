#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "**** This is the DEFAULT CONSTRUCTOR ****";
}

Bureaucrat::Bureaucrat(const Bureaucrat &bcr)
{
	std::cout << "**** This is the COPY CONSTRUCTOR ****";
	*this = bcr;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "**** This is the DESTRUCTOR ****";
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &brc)
{
	_name = brc._name;
	_grade = brc._grade;
	return(*this);
}
int Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}
std::ostream & operator<<(std::ostream & o,const Bureaucrat  &a)
{
	o << a.getGrade();// ask how to correct it
	o << a.getName();// ask how to correct it
	return(o);
}

void Bureaucrat::increment()
{
	_grade--;
}

void Bureaucrat::decrement()
{
	_grade++;
}