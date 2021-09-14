#include <iostream>
#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

struct Data {
	int a;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif