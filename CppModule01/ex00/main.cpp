#include "Zombie.hpp"
int main()
{
	Zombie z1("Zombie1");
	z1.annonce();

	Zombie *z2;
	z2 = newZombie("Zombie2");
	z2->annonce();
	delete z2;

	randomChump("Zombie3");
}