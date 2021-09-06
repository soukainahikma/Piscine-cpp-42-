#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &ortho);
		~Bureaucrat();
		Bureaucrat & operator = (const Bureaucrat &brc);
		Bureaucrat(const std::string name, const int grade);
		std::string getName() const;
		int getGrade() const;
		 void increment();
		 void decrement();
		 class GradeTooLowException : public std::exception
		 {
			public:
		 	 		virtual const char * what () const throw ()
					{
		 				return "C++ Exception1";
		 			}
		 };
		 class GradeTooHighException : public std::exception
		 {
			public:
		 		virtual const char * what () const throw ()
				{
		 			return "C++ Exception2";
		 		}
		 };
	};
std::ostream & operator<<(std::ostream & o,Bureaucrat const &brc);
#endif