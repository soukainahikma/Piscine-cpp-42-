#include <iostream>
#include <vector>
#include "easyfind.hpp"
int main()
{
	std::vector<int> g1;
	int x;
		srand(time(NULL));
	for (int i = 0; i <= 5; i++)
	{	
		 x = rand() % 10;
		 std::cout << x << " ";
		g1.push_back(x);
	}
	std::cout << std::endl;
	easyfind(g1,2);
	return 0;
}