#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	index=0;
}

MateriaSource::MateriaSource(const MateriaSource &a)
{
	*this = a;
}


MateriaSource::~MateriaSource()
{
	for (int i = 0; i < index; i++)
	{
		delete source[i];
	}
}

MateriaSource & MateriaSource::operator = (const MateriaSource &a)
{
	index = a.index;
	for (size_t i = 0; i < 4; i++)
	{
		this->source[i] = a.source[i]->clone();
	}
	return(*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if( index <=3 && index >= 0)
	{
		source[index++] = m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if ( source[i]->getType() == type)
			return(source[i]->clone()); 
	}
		return(NULL);
}