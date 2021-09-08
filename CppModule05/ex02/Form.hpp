#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	protected:
		const std::string _name;
		bool _isSigned;
		const int _gradeSign;
		const int _gradeExec;
	public:
		Form();
		Form(const Form &ortho);
		~Form();
		Form & operator = (const Form &form);
		Form(const std::string name, const int gradeSign, const int _gradeExec);
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool getIsSigned() const;
		void beSigned(Bureaucrat &brc);
		
		class GradeTooLowException : public std::exception
		 {
			public:
				virtual const char * what () const throw ();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what () const throw ();
		};
		virtual void action() const = 0;

};
std::ostream & operator<<(std::ostream & o,Form const &brc);
#endif