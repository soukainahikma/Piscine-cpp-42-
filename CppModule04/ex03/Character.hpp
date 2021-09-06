#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include"AMateria.hpp"
#include <iostream>

class Character:public ICharacter
{
	private:
		std::string Name;
		AMateria *inventory[4];
		int index;
	public:
		Character();
		Character(const Character &ortho);
		~Character();
		Character & operator = (const Character &a);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		Character(std::string const & name);
};
#endif