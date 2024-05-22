#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Default Cure Constructor" << std::endl;
}
Cure::Cure(Cure const & copy) :AMateria(copy)
{
		std::cout << "Cure copy" << std::endl;
		*this=copy;
}
Cure & Cure::operator=(Cure const &  inst)
{
	std::cout << "Cure operator=" << std::endl;
	this-> _type= inst.getType();
	return(*this);
}
Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}
Cure* Cure::clone() const
{
	std::cout << "Cure clone called. Allocating new Cure" << std::endl;
	Cure *clone = new Cure(*this);
	return (clone);
}
void  Cure::use(ICharacter& target)
{
	std::cout << "* heals ";
	std::cout << target.getName() << "'s wounds *" << std::endl;
}