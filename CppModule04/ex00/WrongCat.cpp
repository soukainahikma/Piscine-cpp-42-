#include "Animal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat class constructed" << std::endl;

}
WrongCat::WrongCat(const WrongCat &a)
{
	*this = a;
	std::cout<<"Copy constructor called"<< std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat class destructed" << std::endl;
}
WrongCat & WrongCat::operator = (const WrongCat &a)
{
	type = a.type;
	return(*this);
}
std::string const WrongCat::getType()const
{
	return(type);
}
void WrongCat::makeSound()const
{
	std::cout << "MEWWWWWWWWW...."<< std::endl;
}