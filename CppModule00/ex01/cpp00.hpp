#ifndef CPP00_HPP
# define CPP00_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class Myinformation {
	private:
		std::string 	first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		login;
		std::string		postal_address;
		std::string		email_address;
		std::string		phone_number;
		std::string		birthday_date;
		std::string		favorite_meal;
		std::string		underwear_color;
		std::string		darkest_secret;
	public:
		void fill_info(void);
		void show_infos(int i);
		void secret(void);
		Myinformation(void);
};
int	check_index(std::string str);
std::string check_line(std::string str);
#endif