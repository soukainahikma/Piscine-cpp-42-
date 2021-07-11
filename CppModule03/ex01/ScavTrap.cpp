#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::~ScavTrap()
{
		std::cout<< BOLDBLUE<< "--------------------------------------------------------------------------------"<<std::endl;
	std::cout<<"|" << BOLDRED<< "                         ScarvTrap Object destroyed!! "<<BOLDBLUE << "                        |"<< std::endl;
	std::cout<< BOLDBLUE<< "--------------------------------------------------------------------------------"<<std::endl;

}
void ScavTrap::attack(std::string const & target)
{
		this->hitpoints--;
		this->attackDamage = attackDamage + 5;
		this->energyPoints = energyPoints - 5;
		gunPrinter(BLUE"ScavTrap"WHITE);
		std::cout << BOLDBLACK << "ScavTrap <"<< RED <<_name << BOLDBLACK <<"> attacks <" << RED << target << BOLDBLACK <<"> , causing <  "<< RED<< attackDamage << BOLDBLACK <<"  > points of damage!"<< RESET<<std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->hitpoints= 100;
	this->energyPoints= 50;
	this->attackDamage= 20;
	
	std::cout << BOLDBLUE << "              |            ___                     |         "<< std::endl;
	std::cout << BOLDBLUE << "              |        _  |@ @|                    |         "<< std::endl;
	std::cout << BOLDBLUE << " ScavTrap     |       / \\ \\ - /  __                | "<< WHITE <<"   Hitpoints     : " << hitpoints << std::endl;
	std::cout << BOLDBLUE << "              |       ) O|------|  |   __          |   "<< WHITE <<"      "<< std::endl;
	std::cout << BOLDBLUE << "   Robot      |       / /\\      /\\ )_ / _\\         |"<< WHITE <<"    Energy Points  : " << energyPoints << std::endl;
	std::cout << BOLDBLUE << "              |      )/  /\\____/\\ \\__O (__         |"<< WHITE <<"         "<< std::endl;
	std::cout << BOLDBLUE << "Constructed   |     |/  (--/  \\--)    \\__/         | "<< WHITE <<"   Attack Damage  : " << attackDamage << std::endl;
	std::cout << BOLDBLUE << "              |     /   _)(    )(_                 |         "<< std::endl;
	std::cout << BOLDBLUE << "              |        `---'  '---`                |         "<< RESET<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << std::endl;
	std::cout << BOLDBLUE"                    ScavTrap has enterred in GATE KEEPER mode." <<std::endl;
}