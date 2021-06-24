#include"Zombie.hpp"
void Zombie::setName(std::string name)
{
	_name = name;
}
Zombie::Zombie()
{
	std::cout <<"construction done\n";
	return;
}
void Zombie::annonce()
{
	std::cout <<"<"<< _name << "> " << "Braiiiiiiinnnssss...\n";
}