#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",145,137)
{

	std::cout << "**** This is the DEFAULT CONSTRUCTOR ****" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &bcr):Form(bcr._name, bcr._gradeSign, bcr._gradeExec)
{
	std::cout << "**** This is the COPY CONSTRUCTOR ****" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "**** This is the DESTRUCTOR ****" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target,145,137){}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &form)
{
	_isSigned = form._isSigned;
	return(*this);
}
void ShrubberyCreationForm::action()const
{
	const char *namefile= "hello";
	std::ofstream file;
	file.open(namefile, std::fstream::in | std::fstream::out | std::fstream::trunc);
	file << "               ,@@@@@@@,"  << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o."  << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"  << std::endl;
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"  << std::endl;
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"  << std::endl;
	file << "   %&&%/ %&%%&&@@\\ V /@@' 88\\8 /88'"  << std::endl;
	file << "   &%\\  /%&'    |.|        \\ '|8'"  << std::endl;
	file << "       |o|        | |         | |"  << std::endl;
	file << "       |.|        | |         | |"  << std::endl;
	file << "    \\/ .\\////  ,\\_//\\/.  \\//__/ "  << std::endl;
	
	file.close();
}