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
		//Action: Makes some drilling noises, and tell us that <target> has been robotomized successfully 50% of the time. Otherwise, tell us it’s a failure.
};
#endif