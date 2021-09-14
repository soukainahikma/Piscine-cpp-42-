#include "Serialization.hpp"

int main()
{
	Data *ptr = new Data;
	ptr->a = 5;
	std::cout << ptr << "  " << ptr->a  << std::endl;
	uintptr_t raw = serialize(ptr);
	std::cout << &raw << "  " << raw  << std::endl;

	ptr = deserialize(raw);
	std::cout << ptr << " " <<ptr->a<< std::endl;
}