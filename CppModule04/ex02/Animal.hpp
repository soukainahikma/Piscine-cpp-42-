#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal{
	protected:
		std::string type;
	public:
		Animal();                             //Default constructor
		Animal(const Animal &ortho);          //copy constructor
		virtual ~Animal();                            //destructor
		Animal & operator = (const Animal &a);//assignation operator
		std::string const getType()const;              //getter
		virtual void makeSound()const = 0; // made the class abstract by making this class pure virtual function
		// should i keep the definition of the abstract class in the cpp file 
};
#endif