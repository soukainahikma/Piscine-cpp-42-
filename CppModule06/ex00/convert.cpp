#include "convert.hpp"

void convert_int(char *str)
{
	if(std::isdigit(str[0]))
		std::cout << "int : " << static_cast<int>(atoi(str)) << std::endl;
	else
		std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
}

void convert_float(char *str)
{
	if(std::isdigit(str[0]))
		std::cout << "float : " << static_cast<float>(atof(str)) << "f"<< std::endl;
	else
		std::cout << "float : " << static_cast<float>(str[0]) << "f" << std::endl;
}

void convert_char(char *str)
{
	if(std::isdigit(str[0]))
	{
		if(atoi(str) >= 32 && atoi(str) <= 127 )
				std::cout << "char : " << static_cast<char>(atoi(str)) << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
	}
	else
		std::cout << "char : " << static_cast<char>(str[0]) << std::endl;

	//else non displayable
}