#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cerr << "Animal constructed" << std::endl;
};

Animal::Animal(const Animal& animal)
{
	type = animal.type;
	std::cerr << "Animal copy constructed" << std::endl;
};

Animal& Animal::operator = (const Animal& animal)
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
	std::cout << "ARGLEUROUFAO" << std::endl;
};
