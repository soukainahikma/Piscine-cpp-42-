#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &bcr)
{
	*this = bcr;
}

Intern::~Intern(){}

Intern & Intern::operator = (const Intern &intern)
{
	(void) intern;
	return(*this);
}
Form *func_sh(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *func_ro(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *func_pr(std::string target)
{
	return new PresidentialPardonForm(target);
}
Form * Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3] ={"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
	Form * (*a[])(std::string) = {func_sh, func_ro, func_pr};
	int i = 0;
	while (i < 3)
	{
		if (name == tab[i])
			break ;
		i++;
	}
	if( i == 3)
	{
		std::cout << "wrong name" << std::endl;
		throw (ErrorException());
		return NULL;
	}
	return (a[i](target));
}
const char *Intern::ErrorException::what() const throw ()
{
	return "Error";
}