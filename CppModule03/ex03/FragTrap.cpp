#include "FragTrap.hpp"

FragTrap::FragTrap()
{

}

FragTrap::~FragTrap()
{
		std::cout<< MAGENTA<< "--------------------------------------------------------------------------------"<<std::endl;
	std::cout<<"|" << BOLDRED<< "                         FragTrap Object destroyed!! "<<MAGENTA << "                        |"<< std::endl;
	std::cout<< MAGENTA<< "--------------------------------------------------------------------------------"<<std::endl;

}
void FragTrap::attack(std::string const & target)
{
		this->hitpoints--;
		this->attackDamage = attackDamage + 5;
		this->energyPoints = energyPoints - 5;
		gunPrinter(MAGENTA"FragTrap"WHITE);
		std::cout << BOLDBLACK << "FragTrap <"<< RED <<_name << BOLDBLACK <<"> attacks <" << RED << target << BOLDBLACK <<"> , causing <  "<< RED<< attackDamage << BOLDBLACK <<"  > points of damage!"<< RESET<<std::endl;
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
void FragTrap::highFivesGuys()
{
	std::cout << std::endl;
	std::cout << MAGENTA"                    FragTrap : hight five guys !!" <<std::endl;
}