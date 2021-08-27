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
    brain = new Brain ();
         *brain = *a.brain; 
     type = a.type;
std::cout<<"Deep Copy constructed"<< std::endl;
std::cout<<"Copy constructor called"<< std::endl;
	
}
Dog::~Dog()
{
    delete brain;
        std::cout << "deep copy brain destructed" << std::endl;
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