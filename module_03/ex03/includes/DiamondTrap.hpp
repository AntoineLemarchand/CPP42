#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap& diamondtrap);
		DiamondTrap& operator = (const DiamondTrap& diamondtrap);
		~DiamondTrap();

		using 	ScavTrap::attack;
		void	whoAmI( void );
};
