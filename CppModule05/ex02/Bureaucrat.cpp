#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bureaucrat"), _grade(150)
{
	std::cout << "**** This is the DEFAULT CONSTRUCTOR ****" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bcr)
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
Bureaucrat::Bureaucrat(const std::string name , const int grade): _name(name)
{
		this->_grade = grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
	if( _grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement()
{
	_grade++;
	if( _grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
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
 	if (this->_grade <= form.getGradeSign()){
		std::cout << this->_name << " signs " << form.getName() << std::endl;
		form.setSigned(true);
	}
	else
		std::cout << this->_name << " cannot sign because " << form.getName() << " need to be grade " << form.getGradeSign() << std::endl;
	return ;

}

void Bureaucrat::executeForm(Form const & form)
{
	try{
		form.execute(*this);
		std::cout << "Bureaucrat " << this->_name << " executes " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Bureaucrat " << this->_name << " grade is too low (" << this->_grade << "). They need a grade of "
			<< form.getGradeExec() << " to execute " << form.getName() << std::endl;
	}

}