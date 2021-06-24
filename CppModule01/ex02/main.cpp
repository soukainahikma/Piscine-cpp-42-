#include <iostream>
int main()
{
	std::string str;
	std::string *stringPTR;
	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::string &stringREF = str;
	std::cout<< "the actual string str :" <<str<<std::endl;
	std::cout<< "display the address in memory of the string :" <<&str<<std::endl;
	
	std::cout<< "display the address of the string by using stringPTR : "<<stringPTR<<std::endl; // 0x22ff10 (address of the pointer variable)
	std::cout<< "display the address of the string by using stringREF : "<<&stringREF<<std::endl;
	std::cout<< "display the string using the pointer : "<<*stringPTR<<std::endl;
	std::cout<< "display the string using the reference : " << stringREF<<std::endl;
}