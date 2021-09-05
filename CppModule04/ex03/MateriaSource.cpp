#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    index=0;
    std::cout << "MateriaSource class constructed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &a)
{
    index = a.index;
    std::cout<<"Copy constructor called"<< std::endl;
}


MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource class destructed" << std::endl;
}
MateriaSource & MateriaSource::operator = (const MateriaSource &a)
{
    // assignation needed
    index = a.index;
    return(*this);
}

void MateriaSource::learnMateria(AMateria* m)// i added the name of the variable
{
    if( index <=3 && index >= 0)
		source[index++] = m;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    if ( type == "ice")
        source[index - 1] = new Ice(type); 
    else if (type == "cure")
        source[index - 1] = new Cure(type); 
    else
        return(NULL);
    return( source[index-1]);
}