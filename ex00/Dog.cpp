#include "Animal.hpp"
#include "Dog.hpp"
Dog::Dog(): Animal("Dog")
{
	std::cout << "Default Dog Constructor" << std::endl;
}
Dog::Dog(std::string type)
{
	setType(type);
	std::cout << "Dog Constructor" << std::endl;
}
Dog::Dog(const Dog &copy) : Animal("Dog")
{
	std::cout << "🧬 Dog copy constructor called" << std::endl;
	*this = copy;
	return;
}
Dog::~Dog()
{
		std::cout << "Dog Destructor" << std::endl;
}
Dog &  Dog::operator =(Dog const &inst)
{
	//Dog & Dog::operator =(Dog const &rhs)

	this->_type = inst.getType();
	return *this;

}

void Dog::makeSound() const
{

		std::cout << "Dog Sound" << std::endl;
}
std::string Dog::getType() const 
{
	return(_type);
}
void Dog::setType(std::string type)
{
	_type=type;
}
