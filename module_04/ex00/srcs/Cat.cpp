#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cerr << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat& cat): Animal()
{
	*this = cat;
	std::cerr << "Cat copy constructed" << std::endl;
}

Cat Cat::operator = (const Cat& cat)
{
	std::cerr << "Cat equal constructed" << std::endl;
	if (this != &cat)
		type = cat.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cerr << "Cat destroyed" << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << "MiaOuOu" << std::endl;
}
