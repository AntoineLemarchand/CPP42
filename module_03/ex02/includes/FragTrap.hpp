#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const ScavTrap& scavtrap);
		FragTrap& operator = (const FragTrap& fragtrap);
		~FragTrap();

		void highFivesGuys( void );
};
