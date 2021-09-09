#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "Form.hpp"
class RobotomyRequestForm:public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &ortho);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator = (const RobotomyRequestForm &RobotomyRequestForm);
		virtual void action()const;
		RobotomyRequestForm(std::string target);
};
#endif