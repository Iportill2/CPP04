#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(): AAnimal("WrongAnimal") //: this->_type("WrongAnimal")
{
	std::cout << "Default WrongAnimal Constructor" << std::endl;
	this->_type= "WrongAnimal";
	this->_brain = new Brain();
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "🧬 WrongAnimal copy constructor called" << std::endl;
	*this = copy;
	return;
}
WrongAnimal::~WrongAnimal()
{
		std::cout << "WrongAnimal Destructor" << std::endl;
		delete this->_brain ;
}
WrongAnimal &  WrongAnimal::operator =(WrongAnimal const &inst)
{
	this->_type = inst.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, inst._brain->getIdea(i));
	return *this;
}

void WrongAnimal::makeSound() const
{

		std::cout << "diferent sound to bark & miauh" << std::endl;
}
std::string WrongAnimal::getType() const 
{
	return(_type);
}
std::string 	WrongAnimal::tu_string(int value) const
{
	std::ostringstream oss;
	oss << value;
	return oss.str();
}
std::string	WrongAnimal::getIdea(int i) const
{
	return("WrongAnimal Idea " + tu_string(i));
}

void		WrongAnimal::setIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}
