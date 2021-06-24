#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie{
	private:
		std::string _name;
	public:
		void annonce();
		void setName(std::string);
		Zombie();
		~Zombie()
		{
			std::cout << "<" << _name << "> "<<"destructed\n";
		}

};
Zombie* zombieHorde( int N, std::string name );
#endif