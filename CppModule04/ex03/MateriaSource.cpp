#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

    std::cout << "MateriaSource class constructed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &a)
{

    std::cout<<"Copy constructor called"<< std::endl;
}


MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource class destructed" << std::endl;
}
MateriaSource & MateriaSource::operator = (const MateriaSource &a)
{

    return(*this);
}