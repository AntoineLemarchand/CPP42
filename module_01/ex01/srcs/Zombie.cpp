#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}

Zombie::Zombie( const Zombie& zombie )
{
	this->name = zombie.name;
}

Zombie& Zombie::operator = ( const Zombie& zombie )
{
	this->name = zombie.name;
	return (*this);
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->name = name;
}

std::string	Zombie::getName( void )
{
	return (this->name);
}
