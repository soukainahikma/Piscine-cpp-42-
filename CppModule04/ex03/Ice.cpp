#include "Ice.hpp"

Ice::Ice()
{
    type = "Ice";
    std::cout << "Ice class constructed" << std::endl;
}

Ice::Ice(const Ice &a)
{
    type = a.type;
    std::cout<<"Copy constructor called"<< std::endl;
}


Ice::~Ice()
{
    std::cout << "Ice class destructed" << std::endl;
}
Ice & Ice::operator = (const Ice &a)
{
    type = a.type;
    return(*this);
}
Ice::Ice(std::string const & type)
{
    this->type = type;// make sure it s right
}

AMateria * Ice::clone()const
{
    AMateria *ice;
    ice = new Ice();
    return (ice);
}
void Ice::use(ICharacter &target)
{
    std::cout << "Ice: * shoots an ice bolt at "<< target.getName() << " *"<< std::endl;
}