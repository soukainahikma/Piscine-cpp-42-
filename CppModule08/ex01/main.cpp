#include "span.hpp"

int main ()
{
	Span sp(6);
	Span sp2(5);
	Span sp3(1000);
	int x;

	std::cout << "---------------- testing sp ---------------" << std::endl;
	for (size_t i = 0; i < 6; i++)
	{
		try
		{
				sp.addNumber(i);
		}
		catch(std::exception &e)
		{
			std::cout << "you have achieved the limit" << std::endl;
		}
	}
	try
	{
		std::cout << "shortestSpan : "<< sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : "<< sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Too short" << std::endl;
	}
	std::cout << "---------------- testing sp2 ---------------" << std::endl;
	try
	{
		sp2.addNumber(0);
		sp2.addNumber(2);
		sp2.addNumber(5);
		sp2.addNumber(10);
		sp2.addNumber(11);
	}
	catch(std::exception &e)
	{
		std::cout << "you have achieved the limit" << std::endl;
	}
	try
	{
		std::cout << "shortestSpan : "<< sp2.shortestSpan() << std::endl;
		std::cout << "longestSpan : "<< sp2.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Too short" << std::endl;
	}

	std::cout << "---------------- testing sp3 ---------------" << std::endl;	
	srand(time(NULL));
	for (size_t i = 0; i < 1000; i++)
	{
		try
		{
			x = rand() %1000;
				sp3.addNumber(x);
		}
		catch(std::exception &e)
		{
			std::cout << "you have achieved the limit" << std::endl;
		}
	}
	std::cout << "shortestSpan : " << sp3.shortestSpan() << std::endl;
	std::cout << "longestSpan : " << sp3.longestSpan() << std::endl;
}