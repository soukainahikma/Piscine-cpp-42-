#include "Zombie.hpp"
int main()
{
	int N = 4;
	Zombie *z;
	z = zombieHorde(N, "ZOMBE1");
	for (int i = 0; i < N; i++)
	{
		z[i].annonce();
	}
	delete [] z;
}