#include <iostream>
#include <sstream>
#include <cctype>
#include <cstdlib>
#include "Caster.hpp"

Caster::Caster( void ): _val("a")
{}

Caster::Caster( std::string literal ): _val(literal)
{}

Caster::Caster(const Caster& caster): _val(caster.getVal())
{}

Caster& Caster::operator = (const Caster& caster)
{
	(void)caster;
	std::cerr << "Equal operator overload disreguards const qualifier" << std::endl;
	return (*this);
}

Caster::~Caster( void )
{}

std::string		Caster::getVal( void ) const
{
	return (_val);
}

void		Caster::putChar( void ) const
{
	std::cout << "char: ";
	if (_val.length() == 1 && isprint(_val[0]))
		std::cout << static_cast<char>(_val[0]);
	else
	{
		std::stringstream intVal(_val);
		int output;

		intVal >> output;

		if (isprint(output))
			std::cout << static_cast<char>(output);
		else
			std::cout << "Non displayable";
	}
	std::cout << std::endl;
}

void		Caster::putInt( void ) const
{
	std::cout << "int: ";

	if (_val.length() == 1 && !isdigit(_val[0]))
		std::cout << static_cast<int>(_val[0]) << std::endl;
	else if (_val.length() == 1)
		std::cout << _val << std::endl;
	else
	{
	}
}

void		Caster::putFloat( void ) const
{
	std::cout << "float: ";

	if (_val.length() == 1 && !isdigit(_val[0]))
		std::cout << static_cast<float>(_val[0]) << std::endl;
	else if (_val.length() == 1)
		std::cout << _val << std::endl;
	else
	{
	}
}

void		Caster::putDouble( void ) const
{
	std::cout << "double: ";
	if (_val.length() == 1 && !isalpha(_val[0]))
		std::cout << static_cast<char>(_val[0]) << std::endl;
	else
		std::cout << 'a' << std::endl;
}
