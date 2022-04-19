#pragma once
#include <iostream>

class WrongAnimal
{
	private:
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& wrongAnimal);
		WrongAnimal operator = (const WrongAnimal& wrongAnimal);
		virtual ~WrongAnimal();

		std::string	getType( void ) const;
		void		setType( const std::string newType );

		void		makeSound() const;
};
