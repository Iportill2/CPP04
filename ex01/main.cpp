/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iportill <iportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:13:52 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/05/22 17:01:07 by iportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{	
	Dog* a = new Dog();
	const Animal* z = new Dog();
	const Animal* w = new Cat();
	
	Dog* copyDog = a;
	const Animal* copyCat = w;

	const Animal* ar[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			ar[i] = new Dog();
		else
			ar[i] = new Cat();
	}

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;

	std::cout << "Prueba copia dog: " << copyDog->getType() << std::endl;
	copyDog->makeSound();
	std::cout << copyDog->getType() << " is thinking: \"" << copyDog->getIdea(0) << "\"" << std::endl;
	std::cout << "Prueba copia Animal cat: " << copyCat->getType() << std::endl;
	copyCat->makeSound();
	std::cout << copyCat->getType() << " is thinking: \"" << copyCat->getIdea(9) << "\"" << std::endl;

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;

	std::cout << "soy z Animal-dog " << z->getIdea(9) << std::endl;
	std::cout << a->getType() << " is thinking: \"" << a->getIdea(1) << "\"" << std::endl;
	std::cout << a->getType() << " is thinking: \"" << a->getIdea(2) << "\"" << std::endl;
	
	std::cout << std::endl << "-----------------------" << std::endl << std::endl;
	
	std::cout << "PROBANDO EL ARRAY" << std::endl << std::endl;
	int i = 0;
	while(i < 10)
	{
		std::cout << ar[i]->getType() << " is thinking: \"" <<ar[i]->getIdea(i) << "\"" << std::endl;
		i++;
	}

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;

	
	std::cout << copyDog->getType() << " is thinking: \"" << copyDog->getIdea(1) << "\"" << std::endl;
	copyDog->setDogIdea("pepiño",1);
	std::cout << copyDog->getType() << " is thinking: \"" << copyDog->getIdea(1) << "\"" << std::endl;
	

	/* std::cout << copyCat->getType() << " is thinking: \"" << copyCat->getIdea(1) << "\"" << std::endl;
	copyCat->setCatIdea("pepiño",1);
	std::cout << copyCat->getType() << " is thinking: \"" << copyCat->getIdea(1) << "\"" << std::endl;
	 */
	std::cout << std::endl << "***********************" << std::endl << std::endl;
	Dog basic;
	
	std::cout << basic.getType() << " is thinking: \"" << basic.getIdea(1) << "\"" << std::endl;
	basic.setDogIdea("pepiño",1);
	{
		Dog tmp = basic;
		std::cout << tmp.getType() << " is thinking: \"" << tmp.getIdea(1) << "\"" << std::endl;
	}	
	
	i = 0;
	while(i < 10)
	{
		delete ar[i];
		i++;
	}
	delete a;
	delete z;
	delete w;

	return 0;
}