#include "information.hpp"

int	main()
{
	Myinformation	info[8];
	std::string		index;
	std::string		add;
	int				i;
	int				j;

	i = 0;
	while (1)
	{
		std::cout  << "\033[1m\033[35m>>>\033[1m\033[32m ADD \033[1m\033[35m|\033[1m\033[33m SEARCH \033[1m\033[35m|\033[31m EXIT \033[1m\033[35m<<<" << std::endl<< "\033[1m\033[37m";
		add = check_line(add);
		if (add == "ADD")
		{
			if ( i < 8)
			{
				info[i].fill_info();
				i++;
			}
			else if (i == 8)
				std::cout << "\033[1m\033[31m>>>>>>> YOU CAN'T ADD ANOTHER CONTACT !! <<<<<<<\033[1m\033[37m" << std::endl;
		}
		else if (add == "SEARCH")
		{
			if(i == 0)
			{
				std::cout << "\033[1m\033[31m>>>>>>> THE LIST OF YOUR CONTACTS IS EMPTY <<<<<<<\033[1m\033[37m" << std::endl;
				continue;
			}
			j=0;
			while (j < i)
			{
				info[j].show_infos(j);
				j++;
			}
			std::cout << "\033[1m\033[36mEnter the index :\033[1m\033[37m"<<std::endl;
			index = check_line(index);
			if (i != 0 && check_index(index) != 0 && stoi(index) < i + 1 && stoi(index) != 0)
				info[stoi(index) - 1].secret();
			else if (check_index(index) == 0 || stoi(index) >= i+ 1 || stoi(index) == 0)
				std::cout << "\033[1m\033[31m>>>>>>> wrong index !! <<<<<<<\033[1m\033[37m" << std::endl;
		}
		else if (add == "EXIT")
			return (0);
		else
			std::cout << "\033[1m\033[31m>>>>>>> Wrong command !! <<<<<<<\033[1m\033[37m" << std::endl;
	}
	return (0);
}