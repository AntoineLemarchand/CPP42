#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

int	main( void )
{
	Zombie *zombie = newZombie("zombie1");
	randomChump("chump1");
	zombie->announce();
	delete zombie;
}
