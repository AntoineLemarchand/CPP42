#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main( void )
{
	Zombie *horde1 = zombieHorde(3, "zombie_horde1");
	Zombie *horde2 = zombieHorde(2, "zombie_horde2");
	horde1[0].announce();
	horde2[0].announce();
	horde1[1].announce();
	horde2[1].announce();
	horde1[2].announce();
	delete [] horde1;
	delete [] horde2;
	return (0);
}
