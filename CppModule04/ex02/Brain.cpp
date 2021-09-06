#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain class constructed" << std::endl;
}

Brain::Brain(const Brain &a)
{
	std::cout<<"Copy constructor called"<< std::endl;
		(*this) = a;
}

Brain::~Brain()
{
	std::cout << "Brain class destructed" << std::endl;
}

Brain & Brain::operator = (const Brain &a)
{
	for (size_t i = 0; i < 100; i++)
		ideas[i] = a.ideas[i];
	return(*this);
}

