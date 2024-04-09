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

/* std::string	AAnimal::getIdea(int i) const //No la definimos porque es una clase ABSTRACTA, ya la definiremos en los hijos
{
	(void)i;
	return("Animal class havent got brain, please set type of Animal");
} */

