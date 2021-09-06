#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog class constructed" << std::endl;

}
Dog::Dog(const Dog &a)
{
	*this = a;
	std::cout<<"Deep Copy of the dog constructed"<< std::endl;
	std::cout<<"Copy constructor called"<< std::endl;
}
Dog::~Dog()
{
	delete brain;
	std::cout << "deep copy brain of the dog is destructed" << std::endl;
	std::cout << "Dog class destructed" << std::endl;
}
Dog & Dog::operator = (const Dog &a)
{
	brain = new Brain ();
	type = a.type;
	*brain = *a.brain; 
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
Brain *Dog::getBrain(void)
{
	return(brain);
}