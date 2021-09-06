#ifndef ICE_HPP
#define ICE_HPP
#include"AMateria.hpp"
#include <iostream>

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &ortho);
		~Ice();
		Ice & operator = (const Ice &a);
		Ice(std::string const & type);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif