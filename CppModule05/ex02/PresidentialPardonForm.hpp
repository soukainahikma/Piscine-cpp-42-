#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "Form.hpp"
class PresidentialPardonForm:public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &ortho);
		~PresidentialPardonForm();
		PresidentialPardonForm & operator = (const PresidentialPardonForm &PresidentialPardonForm);
		void action();
		// member fumc action 
		//Action: Tells us <target> has been pardoned by Zafod Beeblebrox.
};
#endif