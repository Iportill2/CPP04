#include "Animal.hpp"

Animal::Animal() : _type("Undefined type")
{
	std::cout << "Default Animal Constructor" << std::endl;

}
Animal::Animal(std::string type) : _type(type) 
{
	std::cout << "Animal Constructor" << std::endl;
/* 	if(getType() == "Dog")
		Dog();
	else if(getType() == "Cat")
		Cat();
	else
		WrongAnimal(); */
}
Animal::Animal(const Animal &copy)
{
	std::cout << "🧬 Animal copy constructor called" << std::endl;
	*this = copy;
	return;
}
Animal::~Animal()
{
		std::cout << "Animal Destructor" << std::endl;
}
Animal &  Animal::operator =(Animal const &inst)
{
	this->_type = inst.getType();
	return *this;
}

void Animal::makeSound() const 
{
		std::cout << "📣 Undefined sound " << std::endl;
}
std::string Animal::getType() const 
{
	return(_type);
}

std::string	Animal::getIdea(int i) const
{
	//return("Animal Idea " + std::to_string(i));
	(void)i;
	return("Animal class havent got brain, please set type of Animal");
}
