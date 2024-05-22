#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    int i = 0;
    while(i < 100)
    {
        std::stringstream ss;
        ss << i;
        this->_ideas[i] = "idea " + ss.str();
        i++; 
    }
}
Brain::Brain(Brain const & copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	int i = 0;
	while(i < 100)
    {
		this->_ideas[i] = rhs._ideas[i];
        i++; 
    }
	return *this;
}

std::string  Brain::getIdeas(int i)
{
	return _ideas[i];
}

void	Brain::setIdeas(int i, std::string idea)
{
	_ideas[i] = idea;
}