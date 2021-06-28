#include <iostream>

int main()
{
	std::string str;
	std::string *stringPTR;
	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::string &stringREF = str;
	std::cout<< "Memory adress of the string             : " << &str <<std::endl;
	std::cout<< "Address of the string using stringPTR   : "<< stringPTR <<std::endl;
	std::cout<< "Address of the string using stringREF   : "<< &stringREF <<std::endl;
	std::cout<< "String using the pointer                : "<< *stringPTR <<std::endl;
	std::cout<< "String using the reference              : " << stringREF <<std::endl;
}