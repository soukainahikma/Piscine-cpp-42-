#include "HumanA.hpp"

void HumanA::attack(){
	std::cout << name <<" attacks with his "<< weapon.getType() << std::endl;
}
HumanA::HumanA(std::string nameA,Weapon &Wp): weapon(Wp),name(nameA)
{
	std::cout << name <<" construction done\n";
	return;
}