#include "convert.hpp"
#include <iomanip>
bool special_case(std::string str)
{
	if (str == "nan" || str =="-inf" || str =="+inf")
		return (true);
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
bool arg_checker(char *str)
{
	std::string s(str);
	if(s.back() == 'f')
		return ( check_digit(s,s.size() - 1));
	else
		 return(check_digit(s,s.size()));
}
void convert_int(char *str)
{
	if(special_case(std::string(str)))
	{
		std::cout << "int : impossible" << std::endl;
		return;
	}
	if(std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
		std::cout << "int : " << static_cast<int>(atoi(str)) << std::endl;
	else
		std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
}

void convert_float(char *str)
{
	int len =1;
	if(std::string(str).find('.') != std::string::npos)
		len =std::string(str).length() - std::string(str).find('.')-1 ;
	if(std::string(str).find('f') != std::string::npos)
		len--;
	if(special_case(std::string(str)))
	{
		std::cout << "float : " << str<< "f" << std::endl;
		return;
	}
	if(std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
		std::cout << "float : "<< std::fixed << std::setprecision(len) << static_cast<float>(atof(str)) << "f"<< std::endl;
	else
		std::cout << "float : "<< static_cast<float>(str[0]) << ".0f" << std::endl;
}
void convert_double(char *str)
{
	if(special_case(std::string(str)))
	{
		std::cout << "double : " << str << std::endl;
		return;
	}
	if(std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
		std::cout << "double : " << static_cast<double>(atof(str))<< std::endl;
	else
		std::cout << "double : " << static_cast<float>(str[0]) << std::endl;
}

void convert_char(char *str)
{
	if(special_case(std::string(str)))
	{
		std::cout << "char : impossible" << std::endl;
		return;
	}
	if(std::isdigit(str[0]) || str[0] == '-' || str[0] == '+')
	{
		if(atoi(str) >= 32 && atoi(str) <= 127 )
				std::cout << "char : " << static_cast<char>(atoi(str)) << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
	}
	else
		std::cout << "char : " << static_cast<char>(str[0]) << std::endl;
}