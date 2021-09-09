#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"
class Intern
{
	public:
			Intern();
			Intern(const Intern &ortho);
			virtual ~Intern();
			Intern & operator = (const Intern &form);
			Form *makeForm(std::string name, std::string target);
			class ErrorException : public std::exception
			{
				public:
					virtual const char * what () const throw ();
			};
};

#endif