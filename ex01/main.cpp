#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	Animal* Zoo[4];
	Zoo[0] = new Animal("Cat");
	Zoo[1] = new WrongAnimal();
/* 	for (int i = 2; i < 4; i++)
	{
		if (i % 2 == 0)
			Zoo[i] = new Dog();
		else
			Zoo[i] = new Cat();
	} */
	for (int i = 2; i < 4; i++)
	{
		if (i % 2 == 0)
			Zoo[i] = new Dog();
		else
			Zoo[i] = new Cat();
	}
	std::cout << std::endl << "Zoo number 0 is " << Zoo[0]->getType() << std::endl ;
	std::cout << "Zoo number 1 is " << Zoo[1]->getType() << std::endl ;
	std::cout <<  "Zoo number 2 is " << Zoo[2]->getType() << std::endl ;
	std::cout << "Zoo number 3 is " << Zoo[3]->getType() << std::endl <<std::endl;


	std::cout <<"/" << Zoo[0]->getIdea(1)<< "/" << std::endl;
	std::cout <<"/" << Zoo[1]->getIdea(2)<< "/" << std::endl;
	std::cout <<"/" << Zoo[2]->getIdea(3)<< "/" << std::endl;
	std::cout <<"/" << Zoo[3]->getIdea(4)<< "/" << std::endl;	
		std::cout << "+++++++++++++++++++++++++++++++++" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		Zoo[i]->makeSound();
		delete Zoo[i];
		std::cout << "**********************************" << std::endl;
	}
		system("leaks Polymorphism");//leaks + "executable name"
	return 0;
}
