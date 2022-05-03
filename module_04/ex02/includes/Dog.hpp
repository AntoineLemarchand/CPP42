#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog(const Dog& dog);
		Dog& operator = (const Dog& dog);
		~Dog();

		Brain&	getBrain( void ) const;
		void	setBrain( const Brain* brain );

		void		makeSound() const;
};
