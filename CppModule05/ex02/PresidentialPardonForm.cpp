#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",25,5)
{

	std::cout << "**** This is the DEFAULT CONSTRUCTOR ****" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &bcr):Form(bcr._name, bcr._gradeSign, bcr._gradeExec)
{
	std::cout << "**** This is the COPY CONSTRUCTOR ****" << std::endl;
	*this = bcr;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "**** This is the DESTRUCTOR ****" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &form)
{
	_isSigned = form._isSigned;
	_target = form._target;
	return(*this);
}

void PresidentialPardonForm::action()const
{
	std::cout << "<"<< this->_target << "> has been pardoned by Zafod Beeblebrox." <<std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
}
