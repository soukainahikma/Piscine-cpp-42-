#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
std::cout << "Dog class constructed" << std::endl;

}
Dog::Dog(const Dog &a)
{
std::cout<<"Copy constructor called"<< std::endl;
	*this = a;
}
Dog::~Dog()
{
std::cout << "Dog class destructed" << std::endl;
}
Dog & Dog::operator = (const Dog &a)
{
    type = a.type;
    return(*this);
}
std::string const Dog::getType()const
{
    return(type);
}

void Dog::makeSound() const 
{
    std::cout << "WOOOF WOOOF .... "<< std::endl;
}