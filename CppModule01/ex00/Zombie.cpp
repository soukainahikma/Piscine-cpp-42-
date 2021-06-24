#include"Zombie.hpp"
Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout <<"<"<< _name << "> " <<"constructed\n";
}
Zombie::Zombie()
{
	return;
}
void Zombie::annonce()
{
	std::cout <<"<"<< _name << "> " << "Braiiiiiiinnnssss...\n";
}