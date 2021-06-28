#include "HumanB.hpp"

void HumanB::attack(){
	std::cout << name <<" attacks with his "<< weapon->getType() << std::endl;
}
HumanB::HumanB(std::string nameB)
{
	name = nameB;
	weapon = nullptr;
	std::cout << name <<" construction done\n";
	return;
}
void HumanB::setWeapon(Weapon &Wp)
{
	weapon = &Wp;
}