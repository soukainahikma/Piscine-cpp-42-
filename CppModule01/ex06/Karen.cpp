#include"Karen.hpp"

void	Karen::debug( void )
{
	std::cout <<"[ DEBUG ]" <<std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::info( void )
{
	std::cout <<"[ INFO ]" <<std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning( void )
{
	std::cout <<"[ WARNING ]" <<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::error( void )
{
	std::cout <<"[ ERROR ]" <<std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void	Karen::complain( std::string level )
{
	std::string tab[4] ={"DEBUG","INFO","WARNING","ERROR"};
	int i = 0;
	void (Karen::*a[])() = {&Karen::debug,
							&Karen::info, 
							&Karen::warning,
							&Karen::error};
	while (i< 4)
	{
		if (level == tab[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			while(i < 4)
				(this->*(a[i++]))();
				break;
		case 1:
			while(i < 4)
				(this->*(a[i++]))();
				break;
		case 2:
			while(i < 4)
				(this->*(a[i++]))();
				break;
		case 3:
			while(i < 4)
				(this->*(a[i++]))();
				break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"<< std::endl;
			return;
	}
	
}