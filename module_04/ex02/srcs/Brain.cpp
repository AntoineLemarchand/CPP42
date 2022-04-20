#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cerr << "Brain constructed" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brain::Brain(const Brain& brain)
{
	std::cerr << "Brain copy constructed" << std::endl;
	*this = brain;
}

Brain& Brain::operator = (const Brain& brain)
{
	std::cerr << "Brain equal constructed" << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = brain.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cerr << "Brain destroyed" << std::endl;
}
