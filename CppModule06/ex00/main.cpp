#include "convert.hpp"

int main(int argc, char ** argv)
{
	if(argc == 2)
	{
		if(arg_checker(argv[1]))
		{
			convert_char(argv[1]);
			convert_int(argv[1]);
			convert_float(argv[1]);
			convert_double(argv[1]);
		}
	}
	else
		std::cout << "wrong number of argument" << std::endl;
}