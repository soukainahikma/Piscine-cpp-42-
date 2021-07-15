#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->hitpoints= 100;
	this->energyPoints= 100;
	this->attackDamage= 30;
	
	std::cout << MAGENTA << "              |            ___                     |         "<< std::endl;
	std::cout << MAGENTA << "              |        _  |@ @|                    |         "<< std::endl;
	std::cout << MAGENTA << " FragTrap     |       / \\ \\ - /  __                | "<< WHITE <<"   Hitpoints     : " << hitpoints << std::endl;
	std::cout << MAGENTA << "              |       ) O|------|  |   __          |   "<< WHITE <<"      "<< std::endl;
	std::cout << MAGENTA << "   Robot      |       / /\\      /\\ )_ / _\\         |"<< WHITE <<"    Energy Points  : " << energyPoints << std::endl;
	std::cout << MAGENTA << "              |      )/  /\\____/\\ \\__O (__         |"<< WHITE <<"         "<< std::endl;
	std::cout << MAGENTA << "Constructed   |     |/  (--/  \\--)    \\__/         | "<< WHITE <<"   Attack Damage  : " << attackDamage << std::endl;
	std::cout << MAGENTA << "              |     /   _)(    )(_                 |         "<< std::endl;
	std::cout << MAGENTA << "              |        `---'  '---`                |         "<< RESET<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

FragTrap::~FragTrap()
{
		std::cout<< MAGENTA<< "--------------------------------------------------------------------------------"<<std::endl;
	std::cout<<"|" << BOLDRED<< "                         FragTrap Object destroyed!! "<<MAGENTA << "                         |"<< std::endl;
	std::cout<< MAGENTA<< "--------------------------------------------------------------------------------"<<std::endl;

}
FragTrap &FragTrap::operator = (const FragTrap &FragObj)
{
	
	_name = FragObj._name;
	hitpoints = FragObj.hitpoints;
	energyPoints = FragObj.energyPoints;
	attackDamage = FragObj.attackDamage;

	return(*this);
}
void FragTrap::highFivesGuys()
{
	std::cout << std::endl;
	std::cout << MAGENTA"                    FragTrap : hight five guys !!" <<std::endl;
}