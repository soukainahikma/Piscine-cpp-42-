#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45)
{

	std::cout << "**** This is the DEFAULT CONSTRUCTOR ****" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &bcr):Form(bcr._name, bcr._gradeSign, bcr._gradeExec)
{
	std::cout << "**** This is the COPY CONSTRUCTOR ****" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "**** This is the DESTRUCTOR ****" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &form)
{
	_isSigned = form._isSigned;
	return(*this);
}
void RobotomyRequestForm::action()const
{
	if(rand()%100 < 50)
		std::cout<< "<" << _target << ">" << "has been robotomized successfully !" << std::endl;
	else
		std::cout << "Robotomy failled !" << std::endl;
}