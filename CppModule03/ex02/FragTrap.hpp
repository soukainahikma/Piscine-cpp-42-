#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap:public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name); //make sure the copy constructor in right
		~FragTrap();
		FragTrap & operator = (const FragTrap &FragObj);
		void highFivesGuys(void);
};
#endif