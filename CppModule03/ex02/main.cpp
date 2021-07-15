#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	
	FragTrap b("  RobotZ  ");
	b.attack("  EnemyC  ");
	b.takeDamage(10);
	b.beRepaired(30);
	b.highFivesGuys();
}
