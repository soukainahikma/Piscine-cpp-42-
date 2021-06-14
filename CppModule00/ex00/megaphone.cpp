#include <iostream>
#include <ctype.h>

int	main(int argc ,char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if(argc > 1)
	{
		while(argv[j])
		{
			while(argv[j][i])
			{
				argv[j][i] = toupper(argv[j][i]);
				i++;
			}
			i = 0;
			std::cout << argv[j];
			j++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}