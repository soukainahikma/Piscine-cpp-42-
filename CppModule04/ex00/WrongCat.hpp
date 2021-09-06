#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"
class WrongCat:virtual public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &ortho);
		virtual ~WrongCat();
		WrongCat & operator = (const WrongCat &a);
		std::string const getType()const;
		void  makeSound() const;
};
#endif