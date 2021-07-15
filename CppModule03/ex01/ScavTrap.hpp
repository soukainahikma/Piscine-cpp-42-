#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap:public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name); //make sure the copy constructor in right
		~ScavTrap();
		ScavTrap & operator = (const ScavTrap &ScavObj);
		void guardGate();
		void attack(std::string const & target);
};
#endif