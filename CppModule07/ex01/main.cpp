#include "iter.hpp"

class Awesome {
	private:
		int _n;
	public:
		Awesome(void):_n(42){return;}
		int get(void)const {return this->_n;}
};
std::ostream & operator<<(std::ostream & o,const Awesome  &a)
{
	o << a.get() ;
	return(o);
}

template<typename T>
void print (T const &x) {std::cout << x << std::endl; return;}

int main( void )
{
	std::cout << "Test 1..........." << std::endl;
	int arr[3] = {1,2,3};
	std::string arr2[3] = {"1hello","2hello","3hello"};
	int b = 3;
	
	iter( arr, b, print);
	iter( arr2, b, print);
	std::cout << "Test 2..........." << std::endl;

	int tab[]= { 0,1,2,3,4};
	Awesome tab2[5];
	iter( tab, 5, print);
	iter( tab2, 5, print);
	return 0;
}