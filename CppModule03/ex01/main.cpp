#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void gunPrinter(std::string name)
{
	std::cout << BOLDWHITE << "                             \\\\___________n_   ___"<< std::endl;
	std::cout << BOLDWHITE << "             "<< name <<"       /     __________| |___)   BANG!!!!"<< std::endl;
	std::cout << BOLDWHITE << "             ATTACK!!     /     /=/"<< std::endl;
	std::cout << BOLDWHITE << "                        /_____/"<< std::endl;


}
int main()
{
	ClapTrap c("  X  ");
	ScavTrap a("  Y  ");
	c.attack("  A  ");
	c.takeDamage(10);
	c.beRepaired(30);
	a.attack("  B  ");
	a.takeDamage(10);
	a.beRepaired(30);
	a.guardGate();
}
