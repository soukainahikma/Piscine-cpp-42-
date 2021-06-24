#include "information.hpp"

Myinformation::Myinformation(void){
	return;
}

void	Myinformation::secret(void)
{
	std::cout << "first_name      :" << first_name << std::endl;
	std::cout << "last_name       :" << last_name << std::endl;
	std::cout << "nickname        :" << nickname << std::endl;
	std::cout << "login           :" << login << std::endl;
	std::cout << "postal_address  :" << postal_address << std::endl;
	std::cout << "email_address   :" << email_address << std::endl;
	std::cout << "phone_number    :" << phone_number << std::endl;
	std::cout << "birthday_date   :" << birthday_date << std::endl;
	std::cout << "favorite_meal   :" << favorite_meal << std::endl;
	std::cout << "underwear_color :" << underwear_color << std::endl;
	std::cout << "darkest_secret  :" << darkest_secret << std::endl;
}

void	Myinformation::fill_info(void)
{
		std::cout << "\033[1m\033[36mEnter your first name        :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		first_name = check_line(first_name);
		std::cout << "\033[1m\033[36mEnter your last_name         :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		last_name = check_line(last_name);
		std::cout << "\033[1m\033[36mEnter your nickname          :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		nickname = check_line(nickname);
		std::cout << "\033[1m\033[36mEnter your login             :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		login = check_line(login);
		std::cout << "\033[1m\033[36mEnter your postal_address    :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		postal_address = check_line(postal_address);
		std::cout << "\033[1m\033[36mEnter your email_address     :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		email_address = check_line(email_address);
		std::cout << "\033[1m\033[36mEnter your phone_number      :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		phone_number = check_line(phone_number);
		std::cout << "\033[1m\033[36mEnter your birthday_date     :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		birthday_date = check_line(birthday_date);
		std::cout << "\033[1m\033[36mEnter your favorite_meal     :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		favorite_meal = check_line(favorite_meal);
		std::cout << "\033[1m\033[36mEnter your underwear_color   :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		underwear_color = check_line(underwear_color);
		std::cout << "\033[1m\033[36mEnter your darkest_secret    :"<< std::endl; 
		std::cout << "\033[1m\033[37m>>>"; 
		darkest_secret = check_line(darkest_secret);
		return ;
}

std::string	ft_trunk(std::string str)
{
	if (str.length() > 10)
	{
		return (str.substr(0, 9) + ".");
	}
	return (str);
}

void	Myinformation::show_infos(int i)
{
	std::cout << "\033[1m\033[33m|";
	std::cout << "\033[1m\033[33m" << std::setw(10) << "Index" ;
	std::cout << "\033[1m\033[33m|";
	std::cout << "\033[1m\033[33m" << std::setw(10) << "First_name";
	std::cout  << "\033[1m\033[33m|";
	std::cout<< "\033[1m\033[33m" << std::setw(10) << "Last_name";
	std::cout << "\033[1m\033[33m|" ;
	std::cout<< "\033[1m\033[33m" << std::setw(10) << "Nickname";
	std::cout << "\033[1m\033[33m|" << std::endl;
	std::cout << "\033[1m\033[33m|";
	std::cout << "\033[1m\033[34m"<< std::setw(10) << i + 1 ;
	std::cout << "\033[1m\033[33m|";
	std::cout << "\033[1m\033[32m" << std::setw(10) << ft_trunk(first_name);
	std::cout  << "\033[1m\033[33m|";
	std::cout<< "\033[1m\033[32m" << std::setw(10) << ft_trunk(last_name);
	std::cout << "\033[1m\033[33m|" ;
	std::cout<< "\033[1m\033[32m" << std::setw(10) << ft_trunk(nickname);
	std::cout << "\033[1m\033[33m|" << std::endl; 
}

bool ft_isnumber(std::string s)
{
	size_t i;

	i = 0;
	while(i < s.length())
	{
		if (isdigit(s[i]) == false)
			return (false);
		i++;
	}
	return(true);
	 
}

int	check_index(std::string str)
{
	std::string WHITESPACE;
	int start;
	int end;

 	WHITESPACE = " \n\r\t\f\v";
	start = str.find_first_not_of(WHITESPACE);
	if(start != -1)
		str = str.substr(start);
	end = str.find_last_not_of(WHITESPACE);
	if(end != -1)
		str = str.substr(0,end+1);
	if(end != -1 && start != -1)
		return(ft_isnumber(str));
	return(0);
}

std::string	check_line(std::string str)
{
	if(!getline(std::cin, str))
		exit(0);
	return(str);
}