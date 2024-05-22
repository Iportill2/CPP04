#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const & copy):Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(i, _brain->getIdeas(i));
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat sounds!" << std::endl;
}

std::string Cat::getIdea(int i) const
{
	return  _brain->getIdeas(i);
}
void Cat::setCatIdea(std::string idea, int i)
{
    this->_brain->setIdeas(i, idea);
}