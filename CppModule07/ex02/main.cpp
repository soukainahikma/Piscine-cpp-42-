#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> arr_one;
	Array<int> arr_two(3);
	std::cout << "Size arr_one = " << arr_one.size() << std::endl;
	std::cout << "Size arr_two = " << arr_two.size() << std::endl;
	for (size_t i = 0; i < arr_two.size(); i++)
	{
		arr_two[i] = i;
		std::cout << "arr_two[" << i << "] = " << arr_two[i] << std::endl;
	}
	
	arr_one = arr_two;
	std::cout << "Copy Object arr_two in arr_one" << std::endl;
	std::cout << "Size arr_one = " << arr_one.size() << std::endl;
	for (size_t i = 0; i < arr_one.size(); i++)
	{
		std::cout << "arr_one[" << i << "] = " << arr_one[i] << std::endl; 
	}

	try
	{
		std::cout << "When accessing an element with the operator[]" << std::endl;
		std::cout << arr_one[11] << std::endl;
		std::cout << "Success!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}