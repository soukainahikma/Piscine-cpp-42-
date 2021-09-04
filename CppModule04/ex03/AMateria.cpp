#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "AMateria";
    std::cout << "AMateria class constructed" << std::endl;
}

AMateria::AMateria(const AMateria &a)
{
    type = a.type;
    std::cout<<"Copy constructor called"<< std::endl;
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;// make sure it s right
}

AMateria::~AMateria()
{
    std::cout << "AMateria class destructed" << std::endl;
}
AMateria & AMateria::operator = (const AMateria &a)
{
    type = a.type;
    return(*this);
}
std::string const & AMateria::getType()const
{
    return(type);
}
