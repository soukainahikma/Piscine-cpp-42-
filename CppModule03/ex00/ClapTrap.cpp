#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->hitpoints= 10;
	this->energyPoints= 10;
	this->attackDamage= 0;
	
	std::cout << BOLDGREEN << "              |            ___                     |         "<< std::endl;
	std::cout << BOLDGREEN << "              |        _  |@ @|                    |         "<< std::endl;
	std::cout << BOLDGREEN << " ClapTrap     |       / \\ \\ - /  __                | "<< YELLOW <<"   Hitpoints     : " << hitpoints << std::endl;
	std::cout << BOLDGREEN << "              |       ) O|------|  |   __          |   "<< YELLOW <<"      "<< std::endl;
	std::cout << BOLDGREEN << "   Robot      |       / /\\      /\\ )_ / _\\         |"<< YELLOW <<"    Energy Points  : " << energyPoints << std::endl;
	std::cout << BOLDGREEN << "              |      )/  /\\____/\\ \\__O (__         |"<< YELLOW <<"         "<< std::endl;
	std::cout << BOLDGREEN << "Constructed   |     |/  (--/  \\--)    \\__/         | "<< YELLOW <<"   Attack Damage  : " << attackDamage << std::endl;
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

ClapTrap &ClapTrap::operator = (const ClapTrap &ClapObj)
{
	
	_name = ClapObj._name;
	hitpoints = ClapObj.hitpoints;
	energyPoints = ClapObj.energyPoints;
	attackDamage = ClapObj.attackDamage;

	return(*this);
}

void ClapTrap::attack(std::string const & target)
{
		this->hitpoints--;
		this->attackDamage = attackDamage + 5;
		this->energyPoints = energyPoints - 5;
		gunPrinter();
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

void gunPrinter()
{
	std::cout << BOLDYELLOW << "                             \\\\___________n_   ___"<< std::endl;
	std::cout << BOLDYELLOW << "             ClapTrap       /     __________| |___)   BANG!!!!"<< std::endl;
	std::cout << BOLDYELLOW << "             ATTACK!!     /     /=/"<< std::endl;
	std::cout << BOLDYELLOW << "                        /_____/"<< std::endl;
}

