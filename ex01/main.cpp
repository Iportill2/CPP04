#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	Animal* Zoo[2];
	Zoo[0] = new Animal();
	Zoo[1] = new WrongAnimal();
	for (int i = 1; i < 3; i++)
	{
		if (i % 2 == 0)
			Zoo[i] = new Dog();
		else
			Zoo[i] = new Cat();
	}
	std::cout << std::endl << "Zoo number 0 is --->" << Zoo[0]->getType() << std::endl ;
	std::cout << "Zoo number 1 is --->" << Zoo[1]->getType() << std::endl <<std::endl;


	std::cout <<"/" << Zoo[0]->getIdea(1)<< "/" << std::endl;
	std::cout <<"/" << Zoo[1]->getIdea(2)<< "/" << std::endl;
	std::cout <<"/" << Zoo[2]->getIdea(3)<< "/" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		Zoo[i]->makeSound();
		delete Zoo[i];
		std::cout << "**********************************" << std::endl;
	}
		system("leaks Polymorphism");//leaks + "executable name"
	return 0;
}
