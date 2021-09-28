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

		template <typename T>
		void addNumber(T itb,T ite)
		{
			if(std::distance(itb,ite) > static_cast<int>(N - arr.size()))
				throw(std::exception());
			else
				arr.insert(arr.end(),itb,ite);
		};
};
#endif