#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat class constructed" << std::endl;
}

Cat::Cat(const Cat &a)
{
	*this = a;
	std::cout << "deep copy of the cat is done !! " << std::endl;
	std::cout<<"Copy constructor called"<< std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "deep copy brain of the cat is destructed" << std::endl;
	std::cout << "Cat class destructed" << std::endl;
}
Cat & Cat::operator = (const Cat &a)
{
	brain = new Brain ();
	type = a.type;
	*brain = *a.brain;
	return(*this);
}
std::string const Cat::getType()const
{
	return(type);
}
void  Cat::makeSound()const
{
	std::cout << "MEWWWWWWWWW...."<< std::endl;
}
Brain *Cat::getBrain(void)
{
	return(brain);
}