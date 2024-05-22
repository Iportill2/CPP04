#include "Ice.hpp"

//CANONICAL//
Ice::Ice(): AMateria("ice")
{
	std::cout << "Default Ice Constructor" << std::endl;
}
Ice::Ice(Ice const & copy):AMateria(copy)
{
	std::cout << "Ice Copy" << std::endl;
	*this = copy;
}
Ice & Ice::operator=(Ice const & inst)
{	
	std::cout << "Ice operator=" << std::endl;
	this->_type=inst.getType();
	return(*this);
}
Ice::~Ice()
{
	std::cout << "Ice Destructor" << std::endl;
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}
Ice* Ice::clone() const 
{
	std::cout << "Ice clone called. Allocating new Ice" << std::endl;
	Ice *clone = new Ice(*this);
	return (clone);
}