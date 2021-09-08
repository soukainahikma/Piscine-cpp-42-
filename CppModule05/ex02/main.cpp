#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

 int main()
{
    try
    {   
        Bureaucrat b("Mojahid", 2);
        Form f("test_form", 3, 6);
        b.signForm(f);
        std::cout << f;
    }
    
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Form::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
}