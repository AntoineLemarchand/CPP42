#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cerr << "WrongAnimal constructed" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
	type = wrongAnimal.type;
	std::cerr << "WrongAnimal copy constructed" << std::endl;
};

WrongAnimal WrongAnimal::operator = (const WrongAnimal& wrongAnimal)
{
	type = wrongAnimal.type;
	std::cerr << "WrongAnimal equal constructed" << std::endl;
	return (*this);
};

WrongAnimal::~WrongAnimal()
{
	std::cerr << "WrongAnimal destroyed" << std::endl;
};

std::string	WrongAnimal::getType( void ) const
{
	return (type);
}

void		WrongAnimal::setType( const std::string newType )
{
	type = newType;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "ARGLEUROUFAO (in an insulting way)" << std::endl;
};
