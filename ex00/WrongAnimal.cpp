#include "WrongAnimal.hpp"
#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "Default WrongAnimal Constructor" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
	setType(type);
	std::cout << "WrongAnimal Constructor" << std::endl;
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
}
WrongAnimal &  WrongAnimal::operator =(WrongAnimal const &inst)
{
	this->_type = inst.getType();
	std::cout << "🧬 WrongAnimal operator = called" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const 
{
	std::cout << "WrongAnimal Sound" << std::endl;
}
std::string WrongAnimal::getType() const 
{
	return(_type);
}
void WrongAnimal::setType(std::string type)
{
	_type=type;
}
