#include "Character.hpp"

Character::Character()
{
	index = 0;
    Name = "Character";
    std::cout << "Character class constructed" << std::endl;
}

Character::Character(const Character &a)
{
    Name = a.Name;
    std::cout<<"Copy constructor called"<< std::endl;
}


Character::~Character()
{
    std::cout << "Character class destructed" << std::endl;
}
Character & Character::operator = (const Character &a)
{
    Name = a.Name;
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
	if( index <=3 && index >= 0)
		inventory[index++] = m;
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
	std::cout<< "testing unequip" << idx << std::endl;

}
void Character::use(int idx, ICharacter& target)
{
	inventory[idx]->use(target);
}