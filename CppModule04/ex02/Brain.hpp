#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
class Brain{
	protected:
		std::string ideas[100]; // make sure this one is right
	public:
		Brain();                  
		Brain(const Brain &ortho);
		virtual ~Brain();
		Brain & operator = (const Brain &a);
		
};
#endif