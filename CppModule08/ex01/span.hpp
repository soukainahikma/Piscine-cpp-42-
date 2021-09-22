#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span{
	private:
		unsigned int N;
		std::vector<int > arr;
	public:
		Span();
		Span(const Span &Span);
		Span & operator = (const Span &Span);
		~Span();
		Span(unsigned int number);
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void spanPrinter();
};
#endif