#ifndef MATERIA_HPP
#define MATERIA_HPP
#include"AMateria.hpp"
#include <iostream>
class Materia:virtual public AMateria
{
public:
    // Materia(std::string const & type);
    Materia();                             //Default constructor
    Materia(const Materia &ortho);          //copy constructor
    ~Materia();                            //destructor
    Materia & operator = (const Materia &a);//assignation operator
    Materia(std::string const & type);
    // std::string const & getType() const; //Returns the materia type
    virtual Materia* clone() const;
    // virtual void use(ICharacter& target);
};

#endif