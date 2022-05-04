#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat();
		Cat(const Cat* cat);
		Cat& operator = (const Cat& cat);
		~Cat();

		Brain&	getBrain( void ) const;
		void	setBrain( Brain& brain );

		void	makeSound() const;
};
