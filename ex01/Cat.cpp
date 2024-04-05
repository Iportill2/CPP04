#include "Animal.hpp"
#include "Cat.hpp"
Cat::Cat(): Animal("Cat")
{
	std::cout << "Default Cat Constructor" << std::endl;
}
Cat::Cat(std::string type)
{
	setType(type);
	std::cout << "Cat Constructor" << std::endl;
}
Cat::Cat(const Cat &copy)
{
	std::cout << "🧬 Cat copy constructor called" << std::endl;
	*this = copy;
	return;
}
Cat::~Cat()
{
		std::cout << "Cat Destructor" << std::endl;
}
Cat &  Cat::operator =(Cat const &inst)
{
	//Cat & Cat::operator =(Cat const &rhs)

	this->_type = inst.getType();
	return *this;

}

void Cat::makeSound() const
{
	std::cout << "Cat Sound" << std::endl;
}
std::string Cat::getType() const 
{
	return(_type);
}
void Cat::setType(std::string type)
{
	_type=type;
}
