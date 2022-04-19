#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	_brain = new Brain();
	std::cerr << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog* dog): Animal()
{
	*this = dog;
	std::cerr << "Dog copy constructed" << std::endl;
}

Dog Dog::operator = (const Dog* dog)
{
	std::cerr << "Dog equal constructed" << std::endl;
	if (this != dog)
	{
		type = dog->getType();
		for (int i = 0; i < 100; i++)
			_brain->ideas[i] = dog->getBrain()->ideas[i];
	}
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cerr << "Dog destroyed" << std::endl;
}

Brain*	Dog::getBrain( void ) const
{
	return (_brain);
}

void	Dog::setBrain( const Brain* brain )
{
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = brain->ideas[i];
}

void	Dog::makeSound() const
{
	std::cout << "wouf" << std::endl;
}
