#include "Animal.hpp"
#include "Cat.hpp"
Cat::Cat(): Animal("Cat")
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

std::string	Cat::getIdea(int i) const
{
		return("Cat Idea " + std::to_string(i));
}

void		Cat::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound MIAUH" << std::endl;
}
std::string Cat::getType() const 
{
	return(_type);
}
