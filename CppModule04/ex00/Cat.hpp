#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &ortho);
		virtual ~Cat();
		Cat & operator = (const Cat &a);
		std::string const getType()const;
		virtual void  makeSound() const;
};
#endif