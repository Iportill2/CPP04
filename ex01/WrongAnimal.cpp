#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rsh)
{
	this->_type = rsh._type;
	
	return *this;
}

std::string	WrongAnimal::getType() const
{ 
	return ("type: " + _type);
}

void	WrongAnimal::makeSound() const
{
	std::cout	<< "WrongAnimal sound!" << std::endl;
}