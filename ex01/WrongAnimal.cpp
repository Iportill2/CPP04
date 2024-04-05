#include "Animal.hpp"
#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(): Animal("WrongAnimal")
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