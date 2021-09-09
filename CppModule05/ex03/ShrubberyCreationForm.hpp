#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "Form.hpp"
class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &ortho);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &ShrubberyCreationForm);
		ShrubberyCreationForm(std::string target);
		virtual void action() const;
};
#endif