#include "Cure.hpp"

Cure::Cure()
{
    type = "Cure";
    std::cout << "Cure class constructed" << std::endl;
}

Cure::Cure(const Cure &a)
{
    type = a.type;
    std::cout<<"Copy constructor called"<< std::endl;
}


Cure::~Cure()
{
    std::cout << "Cure class destructed" << std::endl;
}
Cure & Cure::operator = (const Cure &a)
{
    type = a.type;
    return(*this);
}
Cure::Cure(std::string const & type)
{
    this->type = type;// make sure it s right
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