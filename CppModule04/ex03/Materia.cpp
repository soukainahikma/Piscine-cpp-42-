#include "Materia.hpp"

Materia::Materia()
{
    type = "Materia";
    std::cout << "Materia class constructed" << std::endl;
}

Materia::Materia(const Materia &a)
{
    type = a.type;
    std::cout<<"Copy constructor called"<< std::endl;
}


Materia::~Materia()
{
    std::cout << "Materia class destructed" << std::endl;
}
Materia & Materia::operator = (const Materia &a)
{
    type = a.type;
    return(*this);
}
Materia::Materia(std::string const & type)
{
    this->type = type;// make sure it s right
}

Materia * Materia::clone()const
{
    Materia *cloneM = new Materia();
    cloneM->type = type;
    return (cloneM);
    
}