#pragma once
#include <iostream>

class Animal
{
	private:
	protected:
		std::string	type;

	public:
		Animal();
		Animal(const Animal& animal);
		Animal operator = (const Animal& animal);
		~Animal();

		std::string	getType( void ) const;
		void		setType( const std::string newType );

		void		makeSound() const;
};
