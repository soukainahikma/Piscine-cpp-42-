#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
class Cat:virtual public Animal
{
	public:
		Cat();                             //Default constructor
		Cat(const Cat &ortho);          //copy constructor
		virtual ~Cat();                            //destructor
		Cat & operator = (const Cat &a);//assignation operator
		std::string const getType()const;                //getter
		virtual void  makeSound() const;
};
#endif