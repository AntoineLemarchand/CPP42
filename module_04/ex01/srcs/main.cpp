#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	basics( void )
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
}

void	wrongs( void )
{
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
}

void	brains( void )
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃       Brain Tests      ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;

	Cat *cat = new Cat();
	Brain brain = Brain();
	brain.ideas[0] = "i would love to eat some thuna";
	cat->setBrain(brain);

	Cat *cat2 = new Cat();

	*cat2 = *cat;

	Animal *farm[4] = {new Dog(), new Dog(), cat, cat2};

	std::cout << "original cat first idea " << std::endl;
	std::cout << "\taddress → " << &((Cat*)farm[2])->getBrain()->ideas[0] << std::endl;
	std::cout << "\tthought → " << ((Cat*)farm[2])->getBrain()->ideas[0] << std::endl;

	std::cout << "copied cat first idea   " << std::endl;
	std::cout << "\taddress → " << &((Cat*)farm[3])->getBrain()->ideas[0] << std::endl;
	std::cout << "\tthought → " << ((Cat*)farm[3])->getBrain()->ideas[0] << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cerr << "━━━━━━━━━ Destroying " << farm[i]->getType() << " ━━━━━━━━━" << std::endl;
		delete farm[i];
	}
}

int main( void )
{
	basics();
	//wrongs();
	brains();
	return 0;
}
