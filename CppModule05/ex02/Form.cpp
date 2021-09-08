#include "Form.hpp"

Form::Form():_name("name"), _gradeSign(0), _gradeExec(0)
{
	std::cout << "**** This is the DEFAULT CONSTRUCTOR ****" << std::endl;
}

Form::Form(const Form &bcr):_name(bcr._name), _isSigned(bcr._isSigned), _gradeSign(bcr._gradeSign), _gradeExec(bcr._gradeExec)
{
	std::cout << "**** This is the COPY CONSTRUCTOR ****" << std::endl;
}

Form::~Form()
{
	std::cout << "**** This is the DESTRUCTOR ****" << std::endl;
}

Form & Form::operator = (const Form &form)
{
	_isSigned = form._isSigned;
	return(*this);
}
Form::Form(const std::string name, const int gradeSign, const int gradeExec):_name(name),  _gradeSign(gradeSign),_gradeExec(gradeExec)
{
	if( _gradeSign > 150 || _gradeExec > 150)
		throw Form::GradeTooLowException();
	else if (_gradeSign < 1 || _gradeExec < 1)
		throw Form::GradeTooHighException();
	else
		_isSigned = false;
}

std::string Form::getName() const
{
	return (_name);
}
int Form::getGradeSign() const
{
	return (_gradeSign);
}
int Form::getGradeExec() const
{
	return (_gradeExec);
}
bool Form::getIsSigned() const
{
	return (_isSigned);
}

const char *Form::GradeTooLowException::what() const throw ()
{
	return "Grade Too Low Exception";
}

const char *Form::GradeTooHighException::what () const throw ()
{
	return "Grade Too High Exception";
}

std::ostream & operator<<(std::ostream & o,const Form  &a)
{
	o << "<" << a.getName() <<">, form grade required to sign <" << a.getGradeSign() <<"> grade required to execute <"<< a.getGradeExec()<< ">";
	if (a.getIsSigned() == false)
		o << "this form cannot be signed" << std::endl;
	else
		o << "this form can be signed" << std::endl;
	
	return(o);
}

void Form::beSigned(Bureaucrat &brc)
{
	if (brc.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		_isSigned = true;
}

void Form::setTarget(const std::string &target)
{
	this->_target = target;
}

void Form::execute(Bureaucrat const & executor) const
{
	// check besigned
		if(_isSigned == false)
			std::cout << " " << std::endl;
		else if (executor.getGrade() < _gradeSign)
			std::cout << "WHAT TO DO HERE " << std::endl;
		this->action();
}