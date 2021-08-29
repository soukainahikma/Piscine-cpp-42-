#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog: virtual public Animal
{
	private:
		Brain *brain;
	public:
		Dog();                             //Default constructor
		Dog(const Dog &ortho);          //copy constructor
		virtual ~Dog();                            //destructor
		Dog & operator = (const Dog &a);//assignation operator
		std::string const getType()const;                //getter
		virtual void  makeSound() const;
		Brain *getBrain(void);
};
#endif