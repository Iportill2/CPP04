# include "Brain.hpp"

Brain :: Brain()
{
	std::cout << "Default Constructor Brain" << std::endl;
	this->_ideas[0]="Brainpepe";
	this->_ideas[1]="Brainjose";
	this->_ideas[2]="Brainmanolo";
	this->_ideas[3]="Brainjamon";
/* 	for (int i = 4; i < 100; i++)
		this->_ideas[i] = "Idea[" + std::to_string(i) + "]: 🌈"; */
}
Brain :: Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor " << std::endl;
	*this = copy;
	return ;
}
Brain :: ~Brain()
{
	std::cout << "Destructor Brain" << std::endl;
}
Brain & Brain :: operator =(Brain const &inst)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = inst._ideas[i];
	return *this;
}

std::string	Brain :: getIdea(int i )const
{
		return this->_ideas[i];
}
void Brain :: setIdea(int i, std::string const & idea)
{
	this->_ideas[i] = idea;
}
