#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const & target)
{
		this->hitpoints--;
		this->attackDamage = attackDamage + 5;
		this->energyPoints = energyPoints - 5;
		gunPrinter(GREEN"ClapTrap"WHITE);
		std::cout << BOLDBLACK << "ClapTrap <"<< RED <<_name << BOLDBLACK <<"> attacks <" << RED << target << BOLDBLACK <<"> , causing <  "<< RED<< attackDamage << BOLDBLACK <<"  > points of damage!"<< RESET<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
		std::cout << BOLDBLACK <<"Energy amount after the dammage < "<< RED << amount << BOLDBLACK <<" >"<< std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout <<  BOLDBLACK <<"Repair with an amount of < " << RED << amount << BOLDBLACK <<" >"<< std::endl;
}

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->hitpoints= 10;
	this->energyPoints= 10;
	this->attackDamage= 0;
	
	std::cout << BOLDGREEN << "              |            ___                     |         "<< std::endl;
	std::cout << BOLDGREEN << "              |        _  |@ @|                    |         "<< std::endl;
	std::cout << BOLDGREEN << " ClapTrap     |       / \\ \\ - /  __                | "<< WHITE <<"   Hitpoints     : " << hitpoints << std::endl;
	std::cout << BOLDGREEN << "              |       ) O|------|  |   __          |   "<< WHITE <<"      "<< std::endl;
	std::cout << BOLDGREEN << "   Robot      |       / /\\      /\\ )_ / _\\         |"<< WHITE <<"    Energy Points  : " << energyPoints << std::endl;
	std::cout << BOLDGREEN << "              |      )/  /\\____/\\ \\__O (__         |"<< WHITE <<"         "<< std::endl;
	std::cout << BOLDGREEN << "Constructed   |     |/  (--/  \\--)    \\__/         | "<< WHITE <<"   Attack Damage  : " << attackDamage << std::endl;
	std::cout << BOLDGREEN << "              |     /   _)(    )(_                 |         "<< std::endl;
	std::cout << BOLDGREEN << "              |        `---'  '---`                |         "<< RESET<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout<< BOLDGREEN<< "--------------------------------------------------------------------------------"<<std::endl;
	std::cout<<"|" << BOLDRED<< "                         ClapTrap has been destructed !! "<<BOLDGREEN << "                     |"<< std::endl;
	std::cout<< BOLDGREEN<< "--------------------------------------------------------------------------------"<<std::endl;
}
