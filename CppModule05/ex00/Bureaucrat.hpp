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
		/* done */ Bureaucrat();
		/* done */ Bureaucrat(const Bureaucrat &ortho);
		/* done */ virtual ~Bureaucrat();
		/* done */ Bureaucrat & operator = (const Bureaucrat &brc);
		/* done */ std::string getName() const;
		/* done */ int getGrade() const;
		/* in progress */ void increment();// throw exeption of grade too hight or too low 
		/* in progress */ void decrement();// throw exeption of grade too hight or too low 
		/* in progress  */ class GradeTooLowException : public std::exception
		/* in progress  */ {
		/* in progress  */ 	 const char * what () const throw () {
		/* in progress  */ 		return "C++ Exception1";
		/* in progress  */ 					}
		/* in progress  */ };
		/* in progress  */ class GradeTooHighException : public std::exception
		/* in progress  */ {
		/* in progress  */ 	 const char * what () const throw () {
		/* in progress  */ 		return "C++ Exception2";
		/* in progress  */ 					}
		/* in progress  */ };
	};
std::ostream & operator<<(std::ostream & o,Bureaucrat const &brc);
#endif