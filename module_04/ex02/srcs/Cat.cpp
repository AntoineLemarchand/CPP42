#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	_brain = new Brain();
	std::cerr << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat* cat): Animal()
{
	*this = cat;
	std::cerr << "Cat copy constructed" << std::endl;
}

Cat& Cat::operator = (const Cat& cat)
{
	std::cerr << "Cat equal constructed" << std::endl;
	if (this != &cat)
	{
		*_brain = cat.getBrain();
		type = cat.getType();
		*_brain = cat.getBrain();
	}
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cerr << "Cat destroyed" << std::endl;
}

Brain&	Cat::getBrain( void ) const
{
	return (*_brain);
}

void	Cat::setBrain( Brain& brain )
{
	*_brain = brain;
}

void	Cat::makeSound() const
{
	std::cout << "MiaOuOu" << std::endl;
}
