#include "ClapTrap.hpp"


int main()
{
	ClapTrap c(" RobotX ");

	c.attack(" Enemy ");
	c.takeDamage(10);
	c.beRepaired(30);
}
