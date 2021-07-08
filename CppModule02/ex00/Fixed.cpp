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
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed_point);
}
