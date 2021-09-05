#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include"AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource:virtual public IMateriaSource
{
	private:
		AMateria *source[4];
		int index;
	public:
	    MateriaSource();                             //Default constructor
    	MateriaSource(const MateriaSource &ortho);          //copy constructor
    	~MateriaSource();                            //destructor
    	MateriaSource & operator = (const MateriaSource &a);//assignation operator
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif