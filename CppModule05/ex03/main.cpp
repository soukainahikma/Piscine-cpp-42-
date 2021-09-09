#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b("shikmat", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		b.signForm(*rrf);
		b.executeForm(*rrf);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}