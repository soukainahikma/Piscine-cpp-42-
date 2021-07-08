#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int number_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &ortho);
		~Fixed();
		Fixed & operator = (const Fixed &a);
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed(const int &int_);
		Fixed(const float &float_);
		float toFloat( void ) const;
		int toInt( void ) const;

};
std::ostream & operator<<(std::ostream & o,Fixed const &fix);
#endif