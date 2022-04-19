#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
	type = "";
	std::cerr << "Animal constructed" << std::endl;
};

Animal::Animal(const Animal& animal)
{
	type = animal.type;
	std::cerr << "Animal copy constructed" << std::endl;
};

Animal Animal::operator = (const Animal& animal)
{
	type = animal.type;
	std::cerr << "Animal equal constructed" << std::endl;
	return (*this);
};

Animal::~Animal()
{
	std::cerr << "Animal destroyed" << std::endl;
};

std::string	Animal::getType( void ) const
{
	return (type);
}

void		Animal::setType( const std::string newType )
{
	type = newType;
}

void	Animal::makeSound() const
{
	if (!type.compare("Dog"))
		std::cout << "ouaf" << std::endl;
	else if (!type.compare("Cat"))
		std::cout << "miaou" << std::endl;
};
