#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

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

ScavTrap::~ScavTrap()
{
		std::cout<< BOLDBLUE<< "--------------------------------------------------------------------------------"<<std::endl;
	std::cout<<"|" << BOLDRED<< "                         ScarvTrap has been destructed !!  "<<BOLDBLUE << "                   |"<< std::endl;
	std::cout<< BOLDBLUE<< "--------------------------------------------------------------------------------"<<std::endl;

}

ScavTrap &ScavTrap::operator = (const ScavTrap &ScavObj)
{
	
	_name = ScavObj._name;
	hitpoints = ScavObj.hitpoints;
	energyPoints = ScavObj.energyPoints;
	attackDamage = ScavObj.attackDamage;

	return(*this);
}

void ScavTrap::attack(std::string const & target)
{
		gunPrinter(BLUE"ScavTrap"WHITE);
		std::cout << BOLDBLACK << "ScavTrap <"<< RED <<_name << BOLDBLACK <<"> attacks <" << RED << target << BOLDBLACK <<"> , causing <  "<< RED<< attackDamage << BOLDBLACK <<"  > points of damage!"<< RESET<<std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << std::endl;
	std::cout << BOLDBLUE"                    ScavTrap has enterred in GATE KEEPER mode." <<std::endl;
}