#include <iostream>
#include <stdio.h>

void dump_32bits_integer( int const n); 
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int a = 42;
		 double b = static_cast<double> (a);
		 std::cout << "result of b" << b << std::endl;
	//	casting types	: conversion( seen)
	//					: reinterpretation (seen)
	//					: qualifier reinterpretation ( (seen) but didnt get what is the difference when there is a qualifier type)
	//					: upcast downcast (seen)
	//					: static cast (seen)
				/* `static_cast` is used for cases where you basically want to 
				reverse an implicit conversion, with a few restrictions and additions. 
				`static_cast` performs no runtime checks. 
				This should be used if you know that you refer to an object of a specific type,
				 and thus a check would be unnecessary. */
	//					: DYNAMIC CAST (seen) add badcast in case of a reference
				/* `dynamic_cast` is useful when you don't know what the dynamic 
				type of the object is. It returns a null pointer if the object referred 
				to doesn't contain the type casted to as a base class (when you cast to a 
				reference, a `bad_cast` exception is thrown in that case) */
				//requires a virtual function while downcasting
				//still don t know how virtual keyword is used in downcasting
	//					: REINTERPRET CAST (seen ) but needs more research
	//					: CONST CAST (seen) but has to be reviewed
	//					: CAST OPERATORS (seen) 
	//					: EXPLICIT KEYWORD
 

	}
}