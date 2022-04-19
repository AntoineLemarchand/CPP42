#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& scavtrap);
		ScavTrap& operator = (const ScavTrap& scavtrap);
		~ScavTrap();

		void	guardGate( void );
		void	attack(const std::string& target);
};
