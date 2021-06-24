#include "Zombie.hpp"
void randomChump(std::string name)
{
	
	Zombie *z;
	z = newZombie(name);
	z->annonce();
	delete(z);
}