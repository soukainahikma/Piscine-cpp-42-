#include "Zombie.hpp"
int main()
{
	Zombie *z;
	z = zombieHorde(5, "name");

	delete [] z;
}