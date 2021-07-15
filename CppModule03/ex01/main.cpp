#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap c("  RobotX  ");
	c.attack("  EnemyA  ");
	c.takeDamage(10);
	c.beRepaired(30);

	ScavTrap a("  RobotY  ");
	a.attack("  EnemyB  ");
	a.takeDamage(10);
	a.beRepaired(30);
	a.guardGate();
}
