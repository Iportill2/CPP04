#include "AAnimal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rsh)
{
	this->_type = rsh._type;
	
	return *this;
}

std::string	Animal::getType() const
{ 
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout	<< "Animal sound!" << std::endl;
}

std::string	Animal::getIdea(int i) const
{
	(void) i;
	return ("Animal getIdea");
}