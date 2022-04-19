#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃       Basic Tests      ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "Type of Dog: " << j->getType() << " ┃ Its sound:";
	j->makeSound();
	std::cout << std::endl;
	std::cout << "Type of Cat: " << i->getType() << " ┃ Its sound:";
	i->makeSound();
	std::cout << std::endl;
	std::cout << "Type of Animal: " << meta->getType() << " ┃ Its sound:";
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃   WrongAnimal Tests    ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
	
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* badCat = new WrongCat();

	std::cout << "Type of WrongCat: " << badCat->getType() << " ┃ Its sound:";
	badCat->makeSound();
	std::cout << std::endl;

	std::cout << "Type of WrongAnimal: " << meta2->getType() << " ┃ Its sound:";
	meta2->makeSound();
	std::cout << std::endl;

	delete meta2;
	delete badCat;

	return 0;
}
