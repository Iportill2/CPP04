#include "Animal.hpp"
#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(): _type("Undefined wrong type")
{
	std::cout << "Default WrongAnimal Constructor" << std::endl;
	this->_brain = new Brain();
}
/* WrongAnimal::WrongAnimal(std::string type)
{
	setType(type);
	std::cout << "WrongAnimal Constructor" << std::endl;
} */
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "🧬 WrongAnimal copy constructor called" << std::endl;
	*this = copy;
	return;
}
WrongAnimal::~WrongAnimal()
{
		std::cout << "WrongAnimal Destructor" << std::endl;
		delete this ->_brain;
}
WrongAnimal &  WrongAnimal::operator =(WrongAnimal const &inst)
{
	//WrongWrongAnimal & Animal::operator =(Animal const &rhs)

	this->_type = inst.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, inst._brain->getIdea(i));
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
std::string	WrongAnimal::getIdea(int i) const
{
	return("WrongAnimal Idea " + std::to_string(i));
/* 	(void)i;
	return "🧬📝 Undefined idea"; */
}
void	WrongAnimal::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}