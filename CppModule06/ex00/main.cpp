#include "convert.hpp"

int main(int argc, char ** argv)
{
	if(argc == 2)
	{
		convert_char(argv[1]);
		convert_int(argv[1]);
		convert_float(argv[1]);
	}
	else
		std::cout << "wrong number of argument" << std::endl;
}