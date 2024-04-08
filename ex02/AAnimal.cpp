#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Undefined type")
{
	std::cout << "Default Animal Constructor" << std::endl;

}
AAnimal::AAnimal(std::string type) : _type(type) 
{
	std::cout << "Animal Constructor" << std::endl;
}
AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "🧬 Animal copy constructor called" << std::endl;
	*this = copy;
	return;
}
AAnimal::~AAnimal()
{
		std::cout << "Animal Destructor" << std::endl;
}
AAnimal & AAnimal::operator =(AAnimal const &inst)
{
	this->_type = inst.getType();
	return *this;
}

std::string AAnimal::getType() const 
{
	return(_type);
}
void AAnimal::makeSound() const 
{
	std::cout << "📣 Undefined sound " << std::endl;
}

std::string	AAnimal::getIdea(int i) const
{
	//return("Animal Idea " + std::to_string(i));
	(void)i;
	return("Animal class havent got brain, please set type of Animal");
}
/*
#include "Animal.hpp"

AAnimal::AAnimal(void): type("Undefined type")
{
	std::cout << "🧬 AAnimal default constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(std::string type): type(type)
{
	std::cout << "🧬 AAnimal constructor called with type: " << this->type << std::endl;
	return;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "🧬 AAnimal copy constructor called" << std::endl;
	*this = copy;
	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << "🧬 AAnimal destructor called" << std::endl;
	return;
}

AAnimal & AAnimal::operator =(AAnimal const &rhs)
{
	this->type = rhs.getType();
	return *this;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}

void  		AAnimal::setType(std::string type)
{
	this->type = type;
}

void		AAnimal::makeSound(void) const
{
	std::cout << "🧬📣 Undefined sound " << std::endl;
}

std::string	AAnimal::getIdea(int i) const
{
	(void)i;
	return "🧬📝 Undefined idea";
}

*/