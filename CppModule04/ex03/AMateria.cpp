#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(const AMateria &a)
{
	*this = a;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria(){}

AMateria & AMateria::operator = (const AMateria &a)
{
	type = a.type;
	return(*this);
}

std::string const & AMateria::getType()const
{
	return(type);
}
