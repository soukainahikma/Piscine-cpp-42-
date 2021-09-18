#include "convert.hpp"
#include <iomanip>
#include <string.h>
bool special_case(std::string &str)
{
	if (str == "nan" || str =="-inf" || str =="+inf")
		return (true);
	if(str == "nanf" || str =="-inff" || str =="+inff")
	{
		str.erase(str.length()-1);
		return(true);
	}
	else
		return (false);
}
bool check_digit(std::string s, int size_)
{
	int point = 0;
	int j = 0;
	if(special_case(s))
		return true;
	if(s.length() == 1)
		return(true);
	if (s[0] == '-' || s[0] == '+')
		j++;
	for (int i = j; i < size_; i++)
	{
		if(s[i] == '.')
		{
			continue;
			point = 1;
		}
		if(std::isdigit(s[i]) == 0 || point == 2)
		{
			std::cout<< "invalide argument" << std::endl;
			return false;
		}
	}
	return(true);
}
bool arg_checker(std::string str)
{
	if(str.back() == 'f')
		return ( check_digit(str,str.size() - 1));
	else
		 return(check_digit(str,str.size()));
}
void convert_int(std::string str)
{
	if(special_case(str))
	{
		std::cout << "int : impossible" << std::endl;
		return;
	}
	if(std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
		std::cout << "int : " << static_cast<int>(atoi(str.c_str())) << std::endl;
	else
		std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
}

void convert_float(std::string str)
{
	int len =1;
	if(std::string(str).find('.') != std::string::npos)
		len =std::string(str).length() - std::string(str).find('.')-1 ;
	if(std::string(str).find('f') != std::string::npos)
		len--;
	if(special_case(str))
	{
		std::cout << "float : " << str<< "f" << std::endl;
		return;
	}
	if(std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
		std::cout << "float : "<< std::fixed << std::setprecision(len) << static_cast<float>(atof(str.c_str())) << "f"<< std::endl;
	else
		std::cout << "float : "<< static_cast<float>(str[0]) << ".0f" << std::endl;
}
void convert_double(std::string str)
{
	if(special_case(str))
	{
		std::cout << "double : " << str << std::endl;
		return;
	}
	if(std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
		std::cout << "double : " << static_cast<double>(atof(str.c_str()))<< std::endl;
	else
		std::cout << "double : " << static_cast<float>(str[0]) << std::endl;
}

void convert_char(std::string str)
{
	if(special_case(str))
	{
		std::cout << "char : impossible" << std::endl;
		return;
	}
	if(std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
	{
		if(atoi(str.c_str()) >= 32 && atoi(str.c_str()) <= 127 )
				std::cout << "char : " << static_cast<char>(atoi(str.c_str())) << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
	}
	else
		std::cout << "char : " << static_cast<char>(str[0]) << std::endl;
}