#include "Character.hpp"

Character::Character()
{
	index = 0;
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = nullptr;
	}
}

Character::Character(const Character &a)
{
	*this = a;
}

Character::~Character()
{
	for (int i = 0; i < index; i++)
	{
		delete inventory[i];
	}
}
Character & Character::operator = (const Character &a)
{
	Name = a.Name;
	index = a.index;
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = a.inventory[i]->clone();
	}
	return(*this);
}

Character::Character(std::string const & name)
{
	this->Name = name;
}

std::string const & Character::getName() const
{
	return(Name);
}

void Character::equip(AMateria* m)
{
	if( index <= 3 && index >= 0)
	{
		inventory[index++] = m;
	}
}
void Character::unequip(int idx)
{
	if(idx <= index)
		inventory[idx] = NULL;
	while(idx <= index)
	{
		inventory[idx] = inventory[idx + 1];
		idx ++;
	}
}
void Character::use(int idx, ICharacter& target)
{
	inventory[idx]->use(target);
}