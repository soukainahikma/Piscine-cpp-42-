#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include"AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource
{
	private:
		AMateria *source[4];
		int index;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &ortho);
		~MateriaSource();
		MateriaSource & operator = (const MateriaSource &a);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif