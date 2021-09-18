
#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
	class Array {
		private:
			unsigned int _len;
			T *array;
		public:
			Array(){
				array = new T(0);
			};
			Array(unsigned int n):_len(n), array(new T[_len]){
					for (unsigned int i = 0; i < n; i++)
					{
						array[i] = 0;
					}
			};
			Array(const Array &array){
				*this = array;
			};
			Array & operator = (const Array &a)
			{
				this->_len = a._len;
				array = new T[_len];
				for (unsigned int i = 0; i < _len; i++)
				{
					array [i] = a.array[i];
				}
				return(*this);
			};
			T &operator[](unsigned int i){
				if (i >= _len || i < 0)
					throw std::exception();
				else
					return this->array[i];
			}
			~Array(){};
			unsigned int size(void)
			{
				return(_len);
			};
	};

#endif