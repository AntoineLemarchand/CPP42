#pragma once

#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		Weapon(const Weapon& weapon);
		Weapon operator = (const Weapon& weapon);
		std::string	getType( void ) const;
		void		setType( std::string type );
	private:
		std::string	type;
};
