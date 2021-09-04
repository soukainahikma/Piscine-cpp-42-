#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include"AMateria.hpp"
#include <iostream>

class Character:public virtual ICharacter
{
	protected:
		std::string Name;
		AMateria *inventory[4];
		int index;
	public:
		Character();                             //Default constructor
		Character(const Character &ortho);          //copy constructor
		~Character();                            //destructor
		Character & operator = (const Character &a);//assignation operator
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		Character(std::string const & name);
};
#endif