#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z = new Zombie[N];
	int i;
	i = 0;
	while(i < N)
	{
		z[i].setName(name + std::to_string(i + 1));
		z[i].annonce();
		i++;
	}
	return(z);
}