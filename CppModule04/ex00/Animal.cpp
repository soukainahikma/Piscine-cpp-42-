#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal class constructed" << std::endl;

}

Animal::Animal(const Animal &a)
{
	std::cout<<"Copy constructor called"<< std::endl;
	*this = a;
}

Animal::~Animal()
{
	std::cout << "Animal class destructed" << std::endl;
}

Animal & Animal::operator = (const Animal &a)
{
	type = a.type;
	return(*this);
}

std::string const Animal::getType() const
{
	return(type);
}

void Animal::makeSound() const
{
	std::cout << "I am an animal .... "<< std::endl;
}