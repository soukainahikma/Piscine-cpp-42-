#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal class constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	std::cout<<"Copy constructor called"<< std::endl;
	*this = a;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal class destructed" << std::endl;
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &a)
{
	type = a.type;
	return(*this);
}

std::string const WrongAnimal::getType() const
{
	return(type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "I am an WrongAnimal .... "<< std::endl;
}