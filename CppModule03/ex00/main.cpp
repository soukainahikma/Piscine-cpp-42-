#include "ClapTrap.hpp"

void gunPrinter()
{
	std::cout << BOLDYELLOW << "                             \\\\___________n_   ___"<< std::endl;
	std::cout << BOLDYELLOW << "             ClapTrap       /     __________| |___)   BANG!!!!"<< std::endl;
	std::cout << BOLDYELLOW << "             ATTACK!!     /     /=/"<< std::endl;
	std::cout << BOLDYELLOW << "                        /_____/"<< std::endl;


}
int main()
{
	ClapTrap c("  X  ");
	c.attack("  Y  ");
	c.takeDamage(10);
	c.beRepaired(30);
}
