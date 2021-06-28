#include<iostream>
#include <fstream>
void line_checker(std::string &line, std::string s1, std::string s2)
{
	size_t found;
	found = line.find(s1, 0);
	while (found != std::string::npos)
	{
		line.erase (found, s1.length());
		line.insert(found, s2);
		found = line.find(s1, found + s2.length());
	}
}

std::string toUpperString(std::string str)
{
	size_t i = 0;
	while (i < str.length())
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return(str);
}
bool parsingChecker(std::ifstream &file,std::string fileName, std::string s1, std::string s2)
{
		if(file.fail())
		{
			std::cout<<"\"" <<fileName <<"\""<<": THIS FILE DOES NOT EXIST !!"<< std::endl;
			return false;
		}
		if(s1.empty() || s2.empty())
		{
			std::cout<<"DO NOT ENTER EMPTY STRINGS !!"<< std::endl;
			return false;
		}
		return(true);
}
int main(int argc, char **argv)
{
	std::ifstream file;
	std::ofstream fileReplace;
	std::string line;

	if(argc == 4)
	{
		file.open(argv[1]);
		if(!parsingChecker(file,argv[1],argv[2],argv[3]))
			return(0);
		fileReplace.open(toUpperString(argv[1]) + ".replace", std::fstream::in | std::fstream::out | std::fstream::trunc);
		while (getline(file, line))
		{
			line_checker(line, argv[2], argv[3]);
			fileReplace << line;
			if(!file.eof())
				fileReplace << std::endl;
		}
		file.close();
	}
}