#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &ortho)
{
	std::cout<<"Copy constructor called"<< std::endl;
	*this = ortho;
}

Fixed &Fixed::operator = (const Fixed &op)
{
	std::cout << "Assignation operator called" << std::endl;
	fixed_point = op.getRawBits();
	return(*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float &float_)
{
	fixed_point = roundf(float_ * (1 << number_fractional_bits));
	std::cout << "Float constructor called" << std::endl;
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