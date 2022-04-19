#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal
{
	private:
	protected:
		std::string	type;

	public:
		Animal();
		Animal(const Animal& animal);
		Animal operator = (const Animal& animal);
		virtual ~Animal();

		std::string	getType( void ) const;
		void		setType( const std::string newType );

		virtual void	makeSound() const;
};
