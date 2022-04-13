#pragma once

#include <string>

class	Zombie
{
	public:
		Zombie();
		~Zombie();
		Zombie( const Zombie& zombie );
		Zombie& operator = ( const Zombie& zombie );
		void		announce( void );
		void		setName( std::string name );
		std::string	getName( void );
	private:
		std::string	name;
};
