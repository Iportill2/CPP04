#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		
		std::string	_type;
	
	public:

		Animal();
		Animal(Animal const & copy);
		virtual ~Animal();

		Animal & operator=(Animal const & rhs);

		virtual void makeSound() const = 0;
		virtual std::string	getIdea(int i) const;
		std::string	getType() const;
};

#endif