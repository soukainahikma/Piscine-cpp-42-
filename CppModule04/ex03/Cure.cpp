#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
}

Cure::Cure(const Cure &a)
{
	*this = a;
}

Cure::~Cure(){}

Cure & Cure::operator = (const Cure &a)
{
	type = a.type;
	return(*this);
}

Cure::Cure(std::string const & type)
{
	this->type = type;
}

AMateria * Cure::clone()const
{
	AMateria *cure;
	cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter &target)
{

	std::cout << "* heals "<< target.getName() <<"’s wounds *"<< std::endl;
}