#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &ortho);
		virtual ~Cat();
		Cat & operator = (const Cat &a);
		std::string const getType()const;
		virtual void  makeSound() const;
		Brain *getBrain(void);
};
#endif