#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cerr << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& dog): Animal()
{
	*this = dog;
	std::cerr << "Dog copy constructed" << std::endl;
}

Dog Dog::operator = (const Dog& dog)
{
	std::cerr << "Dog equal constructed" << std::endl;
	if (this != &dog)
		type = dog.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cerr << "Dog destroyed" << std::endl;
}

void		Dog::makeSound() const
{
	std::cout << "wouf" << std::endl;
}
