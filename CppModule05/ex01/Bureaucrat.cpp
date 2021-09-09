#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("Bureaucrat")
{
	std::cout << "**** This is the DEFAULT CONSTRUCTOR ****" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bcr):_name(bcr._name)
{
	std::cout << "**** This is the COPY CONSTRUCTOR ****" << std::endl;
	*this = bcr;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "**** This is the DESTRUCTOR ****" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &brc)
{
	_grade = brc._grade;
	return(*this);
}
Bureaucrat::Bureaucrat(const std::string name , const int grade):_name(name)
{
	_grade = grade;
	if( _grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
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
	o << "<" << a.getName() << ">" << ", bureaucrat grade <" << a.getGrade() << ">" ;
	
	return(o);
}

void Bureaucrat::increment()
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement()
{
	_grade++;
	if( _grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "Grade Too Low Exception";
}

const char *Bureaucrat::GradeTooHighException::what () const throw ()
{
	return "Grade Too High Exception";
}

void Bureaucrat::signForm(Form &form)
{
	try{
		form.beSigned(*this);
		std::cout <<"<"<< this->_name << "> signs <" << form.getName() <<">" << std::endl ;
	}
	catch(std::exception &e)
	{
		std::cout <<"<"<< this->_name << "> cannot sign <" << form.getName() <<"> because <" << e.what() << ">" << std::endl ;
	}
}