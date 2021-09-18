#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T *array,int size_,void (func)(T const &))
{
	for(int i = 0 ; i<size_ ;i++)
	{
			func(array[i]);
	}
}

#endif