#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cerr << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed& src)
{
	std::cerr << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( const int val )
{
	std::cerr << "Int constructor called" << std::endl;
	setRawBits(val * (1 << _scaling_factor));
}

Fixed::Fixed( const float val )
{
	std::cerr << "Float constructor called" << std::endl;
	setRawBits(roundf(val * (1 << _scaling_factor)));
}

Fixed& Fixed::operator = (const Fixed& src)
{
	std::cerr << "Copy assignment operator called" << std::endl;
	if (this != &src)
		_value = src.getRawBits();
	return (*this);
}

std::ostream&	operator << ( std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cerr << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	return (_value);
}

void Fixed::setRawBits( int const raw )
{
	_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << this->_scaling_factor));
}

int		Fixed::toInt( void ) const
{
	return (this->_value / (1 << this->_scaling_factor));
}
