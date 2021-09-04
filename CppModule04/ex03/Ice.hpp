#ifndef ICE_HPP
#define ICE_HPP
#include"AMateria.hpp"
#include <iostream>
class Ice:virtual public AMateria
{
public:
    // Ice(std::string const & type);
    Ice();                             //Default constructor
    Ice(const Ice &ortho);          //copy constructor
    ~Ice();                            //destructor
    Ice & operator = (const Ice &a);//assignation operator
    Ice(std::string const & type);
    // std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif