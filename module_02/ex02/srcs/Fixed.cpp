#include <iostream>
#include <cmath>
#include "Fixed.hpp"

//CONSTRUCTORS
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
	setRawBits(val * (1 << _scaling_factor));
}

Fixed::Fixed( const float val )
{
	setRawBits(roundf(val * (1 << _scaling_factor)));
}

//OPERATOR OVERLOAD
std::ostream&	operator << ( std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed&	Fixed::operator = (const Fixed& src)
{
	std::cerr << "Copy assignment operator called" << std::endl;
	if (this != &src)
		_value = src.getRawBits();
	return (*this);
}

bool	Fixed::operator > ( const Fixed& fixed ) const
{
	return (_value > fixed._value);
}

bool	Fixed::operator < ( const Fixed& fixed ) const
{
	return (_value < fixed._value);
}

bool	Fixed::operator >= ( const Fixed& fixed ) const
{
	return (_value >= fixed._value);
}

bool	Fixed::operator <= ( const Fixed& fixed ) const
{
	return (_value <= fixed._value);
}

bool	Fixed::operator == ( const Fixed& fixed ) const
{
	return (_value == fixed._value);
}

bool	Fixed::operator != ( const Fixed& fixed ) const
{
	return (_value != fixed._value);
}

Fixed	Fixed::operator + ( const Fixed& fixed ) const
{
	Fixed	res;

	res._value = _value + fixed._value;
	return (res);
}

Fixed	Fixed::operator - ( const Fixed& fixed ) const
{
	Fixed	res;

	res._value = _value - fixed._value;
	return (res);
}

Fixed	Fixed::operator * ( const Fixed& fixed ) const
{
	Fixed	res;

	res._value = (toFloat() * fixed.toFloat()) * (1 << _scaling_factor);
	return (res);
}

Fixed	Fixed::operator / ( const Fixed& fixed ) const
{
	Fixed	res;

	res._value = _value / fixed._value;
	return (res);
}

Fixed&	Fixed::operator ++ ( void )
{
	++_value;
	return (*this);
}

Fixed&	Fixed::operator -- ( void )
{
	--_value;
	return (*this);
}

Fixed	Fixed::operator ++ ( int )
{
	Fixed	tmp;

	tmp = *this;
	_value++;
	return(tmp);
}

Fixed	Fixed::operator -- ( int )
{
	Fixed	tmp;

	tmp = *this;
	_value--;
	return(tmp);
}

//DESTRUCTOR
Fixed::~Fixed()
{
	std::cerr << "Destructor called" << std::endl;
}

//GETTER-SETTER
int	Fixed::getRawBits( void ) const
{
	std::cerr << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cerr << "setRawBits member function called" << std::endl;
	_value = raw;
}

//OTHER
float	Fixed::toFloat( void ) const
{
	return ((float)_value / (float)(1 << _scaling_factor));
}

int		Fixed::toInt( void ) const
{
	return (_value / (1 << _scaling_factor));
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return (b);
	return (a);
}

const Fixed	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (b);
	return (a);
}
