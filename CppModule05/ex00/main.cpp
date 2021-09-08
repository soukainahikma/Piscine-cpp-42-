#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main(){
    try
    {
        Bureaucrat bur("name", 151);
        std::cout << bur << std::endl;
        bur.increment();
        std::cout << bur << " (after increment)" << std::endl;
        bur.decrement();
        std::cout << bur << " (after decrement)"<< std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}