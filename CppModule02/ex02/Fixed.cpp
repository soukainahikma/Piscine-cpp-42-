#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point = 0;
	return;
}

Fixed::Fixed(const Fixed &ortho)
{
	*this = ortho;
}

Fixed &Fixed::operator = (const Fixed &op)
{
	fixed_point = op.getRawBits();
	return(*this);
}

Fixed::~Fixed()
{
	return;
}

void Fixed::setRawBits( int const raw )
{
	fixed_point = raw;
}

int Fixed::getRawBits( void ) const
{
	return(this->fixed_point);
}

Fixed::Fixed(const int &int_)
{
	fixed_point = roundf(int_ * (1 << number_fractional_bits));
}
Fixed::Fixed(const float &float_)
{
	fixed_point = roundf(float_ * (1 << number_fractional_bits));
}

float Fixed::toFloat( void ) const
{
	float result = fixed_point / (double)(1 << number_fractional_bits);
	return result;
}

int Fixed::toInt( void ) const
{
	int result = fixed_point / (1 << number_fractional_bits);
	return result;
}

std::ostream & operator<<(std::ostream & o,Fixed const &fix)
{
	o << fix.toFloat();
	return(o);
}

bool Fixed::operator == (const Fixed &op)
{
	return(fixed_point == op.fixed_point);
}

bool Fixed::operator > (const Fixed &op)
{
	return(fixed_point > op.fixed_point);
}

bool Fixed::operator < (const Fixed &op)
{
	return(fixed_point < op.fixed_point);
}

bool Fixed::operator <= (const Fixed &op)
{
	return(fixed_point <= op.fixed_point);
}

bool Fixed::operator >= (const Fixed &op)
{
	return(fixed_point >= op.fixed_point);
}

bool Fixed::operator != (const Fixed &op)
{
	return(fixed_point != op.fixed_point);
}

Fixed Fixed::operator + (const Fixed &a)
{
	fixed_point = fixed_point + a.fixed_point;
	return(*this);
}

Fixed Fixed::operator - (const Fixed &a)
{
	fixed_point = fixed_point - a.fixed_point;
		return(*this);
}

Fixed Fixed::operator * (const Fixed &a)
{
	fixed_point =  this->toFloat() * a.fixed_point;
		return(*this);
}

Fixed Fixed::operator / (const Fixed &a)
{
	fixed_point =  this->toFloat() / a.fixed_point;
		return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed result;
	result = *this;
	this->fixed_point++;
	return(result);
}

Fixed Fixed::operator--()
{
	fixed_point--;
	return(*this);
}

Fixed Fixed::operator++()
{
	fixed_point ++;
	return(*this);
}

Fixed Fixed::operator--(int)
{	
	Fixed result;
	result = *this;
	this->fixed_point--;
	return(result);
}

Fixed Fixed::min(const Fixed &a,const Fixed &b)
{
	if((Fixed)a >= b)
		return(b);
	else
		return(a);
}

Fixed Fixed::min(Fixed &a,Fixed &b)
{
	if(a >= b)
		return(b);
	else
		return(a);
}

Fixed Fixed::max(const Fixed &a,const Fixed &b)
{
	if((Fixed)a <= b)
		return(b);
	else
		return(a);
}

Fixed Fixed::max(Fixed &a,Fixed &b)
{
	if(a <= b)
		return(b);
	else
		return(a);
}