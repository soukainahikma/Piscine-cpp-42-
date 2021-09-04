#include "AMateria.hpp"
#include"Materia.hpp"

int main ()
{
    Materia Ice("ice");
    Materia Cure("cure");
    std::cout << Ice.getType()<< std::endl;
    std::cout << Cure.getType()<< std::endl;
    // Materia *test("ice?");

}