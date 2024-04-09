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
std::string	Dog::getIdea(int i) const
{
	return("Dog Idea " + std::to_string(i));
}

void		Dog::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}
/*

#include "Dog.hpp"

Dog::Dog(void): AAnimal("Dog")
{
	std::cout << "🐕 Dog constructor called" << std::endl;
	this->_brain = new Brain();
}



Dog::Dog(const Dog &copy)
{
	std::cout << "🐕 Dog copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "🐕 Dog destructor called" << std::endl;
	delete this->_brain;
	return ; 
}

Dog & Dog::operator =(Dog const &rhs)
{
	this->type = rhs.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, rhs._brain->getIdea(i));
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << "🐕 WOOOFFF WOOF" << std::endl;
}

std::string	Dog::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}

void		Dog::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}
*/