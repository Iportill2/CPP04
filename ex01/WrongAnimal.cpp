#include "Animal.hpp"
#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(): _type("Undefined wrong type")
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
	//WrongWrongAnimal & Animal::operator =(Animal const &rhs)

	this->_type = inst.getType();
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
