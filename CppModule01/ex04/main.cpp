#include<iostream>
#include <fstream>
void line_checker(std::string &line,std::string s1, std::string s2)
{
	size_t found;
	found = line.find(s1, 0);
	while(found != std::string::npos)
	{
		line.erase (found,s1.length()); 
		line.insert(found,s2);
		found = line.find(s1, found + 1);
	}
}
int main()
{
	std::ifstream file;
	std::ofstream fileReplace;
	std::string fileName;
	std::string s1;
	std::string s2;
	std::string line;
	
	getline(std::cin, fileName);
	getline(std::cin, s1);
	getline(std::cin, s2);
	file.open (fileName);
	fileReplace.open(fileName + ".replace",std::fstream::in | std::fstream::out | std::fstream::trunc);
	while(getline(file, line))
	{
		line_checker(line,s1,s2);
		fileReplace << line << std::endl;
	}
	file.close();
}