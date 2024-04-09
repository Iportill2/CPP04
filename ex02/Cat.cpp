#include "AAnimal.hpp"
#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->_brain = new Brain();
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
		delete this->_brain ;
}
Cat &  Cat::operator =(Cat const &inst)
{
	this->_type = inst.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, inst._brain->getIdea(i));
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound MIAUH" << std::endl;
}
std::string Cat::getType() const 
{
	return(_type);
}
std::string 	Cat::tu_string(int value) const
{
	std::ostringstream oss;
	oss << value;
	return oss.str();
}
std::string	Cat::getIdea(int i) const
{
	//return this->_brain->getIdea(i);
	return("Cat Idea " + tu_string(i));
}

void	Cat::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}

/* std::string Cat::getType() const 
{
	return(_type);
} */
/*
#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "🐈 Cat constructor called" << std::endl;
	this->_brain = new Brain();
}



Cat::Cat(const Cat &copy)
{
	std::cout << "🐈 Cat copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "🐈 Cat destructor called" << std::endl;
	delete this->_brain;
	return ; 
}

//deep copy
Cat & Cat::operator =(Cat const &rhs)
{
	this->type = rhs.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, rhs._brain->getIdea(i));
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << "🐈 MeooooOOooWWWWWWW" << std::endl;
}

std::string	Cat::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}

void		Cat::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}
*/