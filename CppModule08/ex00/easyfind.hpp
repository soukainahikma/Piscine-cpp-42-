#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

template <typename T>
void easyfind(T easy,int i)
{
	if(std::find(easy.begin(),easy.end(),i) != easy.end())
		std::cout << "is found " << std::endl;
	else
		std::cout << "is not found" << std::endl;
}
#endif