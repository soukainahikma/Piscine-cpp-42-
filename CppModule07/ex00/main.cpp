#include "whatever.hpp"

class Awesome {
	private:
		int _n;
	public:
		Awesome(){}
		Awesome(int n): _n(n){}
		bool operator== (Awesome const & rhs) const {return (this->_n == rhs._n);}
		bool operator!= (Awesome const & rhs) const {return (this->_n != rhs._n);}
		bool operator> (Awesome const & rhs) const {return (this->_n > rhs._n);}
		bool operator< (Awesome const & rhs) const {return (this->_n < rhs._n);}
		bool operator>= (Awesome const & rhs) const {return (this->_n >= rhs._n);}
		bool operator<= (Awesome const & rhs) const {return (this->_n <= rhs._n);}
		int get_n(void) const{return (_n);};
		

};
std::ostream & operator<<(std::ostream & o,const Awesome  &a)
{
	o << a.get_n();
	return(o);
}
int main( void ) {

std::cout << "Test 1 .........................." <<std::endl;
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

std::cout << "Test 2 .........................." <<std::endl;

Awesome aw1(42);
Awesome aw2(1337);
std::cout << "min( aw1, awb ) = " << ::min( aw1, aw2 ) << std::endl;
std::cout << "max( aw1, awb ) = " << ::max( aw1, aw2 ) << std::endl;
::swap( aw1, aw2 );
std::cout << "aw1 = " << aw1 <<", aw2 = " << aw2 << std::endl;
return 0;
}