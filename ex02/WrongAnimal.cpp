#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal Constructor" << std::endl;
	this->_brain = new Brain();
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "🧬 WrongAnimal copy constructor called" << std::endl;
	*this = copy;
	return;
}
WrongAnimal::~WrongAnimal()
{
		std::cout << "WrongAnimal Destructor" << std::endl;
		delete this->_brain ;
}
WrongAnimal &  WrongAnimal::operator =(WrongAnimal const &inst)
{
	this->_type = inst.getType();
	return *this;
}

void WrongAnimal::makeSound() const
{

		std::cout << "diferent sound to bark & miauh" << std::endl;
}
std::string WrongAnimal::getType() const 
{
	return(_type);
}
std::string	WrongAnimal::getIdea(int i) const
{
	return("WrongAnimal Idea " + std::to_string(i));
}

void		WrongAnimal::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}
/*
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("Undefined wrong type")
{
	std::cout << "🦠 WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "🦠 WrongAnimal constructor called with type: " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "🦠 WrongAnimal copy constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "🦠 WrongAnimal destructor called" << std::endl;
	return ; 
}

WrongAnimal & WrongAnimal::operator =(WrongAnimal const &rhs)
{
	this->type = rhs.getType();
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void  		WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "🦠📣 Undefined wrong sound " << std::endl;
}

*/