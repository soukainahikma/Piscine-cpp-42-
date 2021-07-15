#include "ClapTrap.hpp"

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


void gunPrinter(std::string name)
{
	std::cout << BOLDWHITE << "                             \\\\___________n_   ___"<< std::endl;
	std::cout << BOLDWHITE << "             "<< name <<"       /     __________| |___)   BANG!!!!"<< std::endl;
	std::cout << BOLDWHITE << "             ATTACK!!     /     /=/"<< std::endl;
	std::cout << BOLDWHITE << "                        /_____/"<< std::endl;


}