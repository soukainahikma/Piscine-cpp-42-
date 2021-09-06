#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
}

Ice::Ice(const Ice &a)
{
	*this = a;
}

Ice::~Ice(){}

Ice & Ice::operator = (const Ice &a)
{
	type = a.type;
	return(*this);
}
Ice::Ice(std::string const & type)
{
	this->type = type;
}

AMateria * Ice::clone()const
{
	AMateria *ice;
	ice = new Ice();
	return (ice);
}
void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *"<< std::endl;
}