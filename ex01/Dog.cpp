#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(std::string type) :Animal()
{
	setType(type);
	std::cout << "Dog Constructor" << std::endl;
}
Dog::Dog(Dog const & copy) :Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog & Dog::operator=(Dog const & rhs)///OJO
{
	this->_type = rhs._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(i, _brain->getIdeas(i));
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog sounds!" << std::endl;
}

std::string Dog::getIdea(int i) const
{
	return  _brain->getIdeas(i);
}
void Dog::setDogIdea(std::string idea, int i)
{
    this->_brain->setIdeas(i, idea);
}
std::string Dog::getType() const 
{
	return(this->_type);
}
void Dog::setType(std::string type)
{
	this->_type=type;
}