#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <type_traits>

template <typename T>
void easyfind(T easy,int i)
{
	if(find(easy.begin(),easy.end(),i) != easy.end())
		std::cout << "is found" << std::endl;
	else
		std::cout << "is not found" << std::endl;
}
#endif