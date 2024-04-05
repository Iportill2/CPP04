#include "Animal.hpp"

Animal::Animal() : _type("Undefined type")
{
	//setType("Undefined type");
	std::cout << "Default Animal Constructor" << std::endl;
}
Animal::Animal(std::string type)
{
	setType(type);
	std::cout << "Animal Constructor" << std::endl;
}
Animal::Animal(const Animal &copy)
{
	std::cout << "🧬 Animal copy constructor called" << std::endl;
	*this = copy;
	return;
}
Animal::~Animal()
{
		std::cout << "Animal Destructor" << std::endl;
}
Animal &  Animal::operator =(Animal const &inst)
{
	this->_type = inst.getType();
	return *this;
}

void Animal::makeSound() const 
{
		std::cout << "Animal Sound" << std::endl;
}
std::string Animal::getType() const 
{
	return(_type);
}
void Animal::setType(std::string type)
{
	_type=type;
}
