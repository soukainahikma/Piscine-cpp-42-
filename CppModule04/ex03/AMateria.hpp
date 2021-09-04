#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
class AMateria
{
protected:
    std::string type; // check if it s right
public:
     AMateria();                             //Default constructor
    AMateria(const AMateria &ortho);          //copy constructor
    virtual ~AMateria();                            //destructor
    AMateria & operator = (const AMateria &a);//assignation operator
    AMateria(std::string const & type);

    // [...] (mean canonical class)
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    // virtual void use(ICharacter& target);
};

#endif