#include "Animal.hpp"
#include "Dog.hpp"
Dog::Dog() : Animal("Dog")
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->_brain = new Brain();
}
Dog::Dog(const Dog &copy)
{
	std::cout << "🧬 Dog copy constructor called" << std::endl;
	*this = copy;
	return;
}
Dog::~Dog()
{
		std::cout << "Dog Destructor" << std::endl;
		delete this->_brain ;
}
Dog &  Dog::operator =(Dog const &inst)
{
	this->_type = inst.getType();
	return *this;
}

void Dog::makeSound() const
{
		std::cout << "Dog Sound BARK" << std::endl;
}
std::string Dog::getType() const 
{
	return(_type);
}
std::string	Dog::getIdea(int i) const
{
	return("Dog Idea " + std::to_string(i));
}

void		Dog::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}