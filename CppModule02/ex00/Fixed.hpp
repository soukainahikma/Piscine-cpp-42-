#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
	private:
		int fixed_point;
		static const int N;
	public:
		Fixed();
		Fixed(const Fixed &ortho);
		~Fixed();
		Fixed & operator = (const Fixed &a);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
#endif