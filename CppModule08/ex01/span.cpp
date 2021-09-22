#include "span.hpp"
#include <algorithm>
Span::Span()
{
	N = 0;
	std::cout << "constructor default" << std::endl;
}

Span::Span(const Span &span)
{
	*this = span;
};
Span & Span::operator = (const Span &span)
{
	this->N = span.N;
	this->arr = span.arr;
	return(*this);
};
Span::~Span(){};
Span::Span(unsigned int number)
{
	N = number;
};
void Span::addNumber(int number)
{
	if(arr.size() != N)
		arr.push_back(number);
	else 
		throw std::exception();

};
void print(int i)
{
	std::cout << i << " ";
}
void Span::spanPrinter(){
	std::for_each(arr.begin(),arr.end(),print);
	std::cout << std::endl;
};
int Span::shortestSpan()
{
	std::vector<int> a= arr;
	std::vector<int> b;
	if(a.size() > 1)
	{
		std::sort(a.begin(),a.end());	
		for (size_t i = 0; i < a.size() - 1; i++)
		{
			b.push_back(a[i+1]-a[i]);
		}

		return(*std::min_element(b.begin(),b.end()));
	}
	else
		throw (std::exception());

};
int Span::longestSpan()
{
	std::vector<int> a= arr;
	if(a.size() > 1)
	{
		std::sort(a.begin(),a.end());
		return(a[a.size() - 1]-a[0]);
	}
	else
		throw (std::exception());
	
};