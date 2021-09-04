#ifndef CURE_HPP
#define CURE_HPP
#include"AMateria.hpp"
#include <iostream>
class Cure:virtual public AMateria
{
public:
    // Cure(std::string const & type);
    Cure();                             //Default constructor
    Cure(const Cure &ortho);          //copy constructor
    ~Cure();                            //destructor
    Cure & operator = (const Cure &a);//assignation operator
    Cure(std::string const & type);
    // std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif