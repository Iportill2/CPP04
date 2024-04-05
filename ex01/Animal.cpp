#include "Animal.hpp"

Animal::Animal() : _type("Undefined type")
{
	//setType("Undefined type");
	std::cout << "Default Animal Constructor" << std::endl;
	this->_brain = new Brain();
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
		delete this->_brain ;
}
Animal &  Animal::operator =(Animal const &inst)
{
	this->_type = inst.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, inst._brain->getIdea(i));
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
std::string	Animal::getIdea(int i) const
{
	return("Animal Idea " + std::to_string(i));
/* 	(void)i;
	return "🧬📝 Undefined idea"; */
}
void	Animal::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}