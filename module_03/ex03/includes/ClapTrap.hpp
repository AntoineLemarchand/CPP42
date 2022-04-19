#pragma once
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap& operator = (const ClapTrap& claptrap);
		~ClapTrap();

		std::string		getName( void ) const;
		unsigned int	getHP( void ) const;
		unsigned int	getEnergy( void ) const;
		unsigned int	getAttack( void ) const;

		void	setName( std::string name );
		void	setHP( unsigned int hp );
		void	setEnergy( unsigned int energy );
		void	setAttack( unsigned int attack );

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected:
		std::string		_name;
		unsigned int	_HP;
		unsigned int	_energy;
		unsigned int	_attack;
};
