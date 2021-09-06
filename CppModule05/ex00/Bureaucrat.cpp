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
Bureaucrat::Bureaucrat(const std::string name , const int grade)
{
	_grade = grade;
	_name = name;
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
	o << a.getGrade();
	o << a.getName();
	return(o);
}

void Bureaucrat::increment()
{
	Bureaucrat::GradeTooHighException c;
	try{
			if( _grade > 1){
		std::cout << "in here" << std::endl;
				throw c;}
			_grade--;
		}
	catch (Bureaucrat::GradeTooHighException b)
	{
		std::cout << b.what() << std::endl ;
	}
}

void Bureaucrat::decrement()
{
	Bureaucrat::GradeTooHighException c;
	try{
			if( _grade < 150)
				throw c;
			_grade++;
		}
	catch (Bureaucrat::GradeTooLowException b)
	{
		std::cout << b.what() << std::endl ;
	}
	_grade++;
}