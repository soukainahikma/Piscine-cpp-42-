#include <iostream>
#include <vector>
#include "easyfind.hpp"
int main()
{
	std::vector<int> g1;

	
	for (int i = 0; i <= 5; i++)
	{	
		g1.push_back(i);
		 std::cout << i << " ";
	}
	std::cout << std::endl;
	easyfind(g1,5);
	return 0;
}