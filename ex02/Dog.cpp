#include "AAnimal.hpp"
#include "Dog.hpp"
Dog::Dog() : AAnimal("Dog")
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
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, inst._brain->getIdea(i));
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
std::string 	Dog::tu_string(int value) const
{
	std::ostringstream oss;
	oss << value;
	return oss.str();
}
std::string	Dog::getIdea(int i) const
{
	return("Dog Idea " + tu_string(i));
}

void		Dog::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}
