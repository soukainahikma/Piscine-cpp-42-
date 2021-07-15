#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout<< "diamond constructor called"<< std::endl;
}
DiamondTrap::DiamondTrap(std::string _name):ScavTrap(_name),FragTrap(_name)
{
	this->_name = _name;

	std::cout << BOLDCYAN << "              |            ___                     |         "<< std::endl;
	std::cout << BOLDCYAN << "              |        _  |@ @|                    |         "<< std::endl;
	std::cout << BOLDCYAN << " DiamondTrap  |       / \\ \\ - /  __                | "<< WHITE <<"   Hitpoints     : " << hitpoints << std::endl;
	std::cout << BOLDCYAN << "              |       ) O|------|  |   __          |   "<< WHITE <<"      "<< std::endl;
	std::cout << BOLDCYAN << "   Robot      |       / /\\      /\\ )_ / _\\         |"<< WHITE <<"    Energy Points  : " << energyPoints << std::endl;
	std::cout << BOLDCYAN << "              |      )/  /\\____/\\ \\__O (__         |"<< WHITE <<"         "<< std::endl;
	std::cout << BOLDCYAN << "Constructed   |     |/  (--/  \\--)    \\__/         | "<< WHITE <<"   Attack Damage  : " << attackDamage << std::endl;
	std::cout << BOLDCYAN << "              |     /   _)(    )(_                 |         "<< std::endl;
	std::cout << BOLDCYAN << "              |        `---'  '---`                |         "<< RESET<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout<< BOLDCYAN<< "--------------------------------------------------------------------------------"<<std::endl;
	std::cout<<"|" << BOLDRED<< "                         DiamondTrap has been destructed !! "<<BOLDCYAN << "                  |"<< std::endl;
	std::cout<< BOLDCYAN<< "--------------------------------------------------------------------------------"<<std::endl;
}
void DiamondTrap::whoAmI()
{
	std::cout << "i am " << name<< std::endl;
}