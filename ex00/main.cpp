#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "*******************************" << std::endl << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongj = new WrongAnimal();
	std::cout << wrongj->getType() << " " << std::endl;
	std::cout << wrongmeta->getType() << " " << std::endl;
	wrongj->makeSound();
	wrongmeta->makeSound();
	delete wrongmeta;
	delete wrongj;
	


	return 0;
}