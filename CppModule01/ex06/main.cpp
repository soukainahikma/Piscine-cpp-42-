#include "Karen.hpp"


int main(int argc, char **argv)
{
	Karen c;
	std::string level;
	if(argc == 2)
	{
		level = argv[1];
		c.complain(level);
	}
	return (0);
}
