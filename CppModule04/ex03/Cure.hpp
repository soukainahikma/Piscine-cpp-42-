#ifndef CURE_HPP
#define CURE_HPP
#include"AMateria.hpp"
#include <iostream>
class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &ortho);
		~Cure();
		Cure & operator = (const Cure &a);
		Cure(std::string const & type);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif