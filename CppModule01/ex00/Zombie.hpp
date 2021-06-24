#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie{
	private:
		std::string _name;
	public:
		void annonce();
		Zombie();
		Zombie(std::string);
		~Zombie()
		{
			std::cout << "<" << _name << "> "<<"destructed\n";
		}

};
Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif