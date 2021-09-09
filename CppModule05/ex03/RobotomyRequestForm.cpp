#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45)
{

	std::cout << "**** This is the DEFAULT CONSTRUCTOR ****" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &bcr):Form(bcr._name, bcr._gradeSign, bcr._gradeExec)
{
	std::cout << "**** This is the COPY CONSTRUCTOR ****" << std::endl;
	*this = bcr;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "**** This is the DESTRUCTOR ****" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &form)
{
	_isSigned = form._isSigned;
	_target = form._target;
	return(*this);
}
void RobotomyRequestForm::action()const
{
	std::cout << "Drilling noises   DRRRRRRRR...." << std::endl;
	srand(time(NULL));
	int i = rand() % 2;
	if( i % 2 == 0)
		std::cout<< "<" << _target << ">" << "has been robotomized successfully !" << std::endl;
	else
		std::cout << "Robotomy failled !" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}
