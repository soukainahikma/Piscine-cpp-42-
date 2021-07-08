#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed{
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

		/* operators comparison */
		bool  operator == (const Fixed &a);
		bool  operator > (const Fixed &a);
		bool  operator < (const Fixed &a);
		bool  operator >= (const Fixed &a);
		bool  operator <= (const Fixed &a);
		bool  operator != (const Fixed &a);
		Fixed operator + (const Fixed &a);
		Fixed operator - (const Fixed &a);
		Fixed operator * (const Fixed &a);
		Fixed operator / (const Fixed &a);
		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed min(Fixed &a, Fixed &b);
		static Fixed min(const Fixed &a,const Fixed &b);
		static Fixed max(Fixed &a,Fixed &b);
		static Fixed max(const Fixed &a,const Fixed &b);
};
std::ostream & operator<<(std::ostream & o,Fixed const &fix);
#endif