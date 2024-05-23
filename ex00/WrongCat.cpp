#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat Constructor" << std::endl;
}
WrongCat::WrongCat(std::string type) : WrongAnimal("WrongCat")
{
	setType(type);
	std::cout << "WrongCat Constructor" << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal("WrongCat")
{
	*this = copy;
	std::cout << "🧬 WrongCat copy constructor called" << std::endl;
	return;
}
WrongCat::~WrongCat()
{
		std::cout << "WrongCat Destructor" << std::endl;
}
WrongCat &  WrongCat::operator =(WrongCat const &inst)
{
	this->_type = inst.getType();
	std::cout << "WrongCat operator=" << std::endl;
	return *this;

}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Sound" << std::endl;
}
std::string WrongCat::getType() const 
{
	return(this->_type);
}
void WrongCat::setType(std::string type)
{
	this->_type = type;
}