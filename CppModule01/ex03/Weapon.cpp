#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
	_type = type;
}
std::string Weapon::getType()
{
	return(_type);
}
Weapon::Weapon(std::string type)
{
	_type = type;
}
Weapon::Weapon()
{
	return;
}