#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cerr << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& src)
{
	std::cerr << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator = (const Fixed& src)
{
	std::cerr << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cerr << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cerr << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cerr << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
