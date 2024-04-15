#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
//# include "ICharacter.hpp"
class Ice : public AMateria
{


public:
//CANONICAL//
						Ice();
//NO TIENE Type//private Ice(std::string type);
						Ice(Ice const & copy);
Ice & 					operator=(Ice const & inst);
						~Ice();


virtual	Ice*			clone() const ;
virtual void			use(ICharacter& target);
};
#endif

/*
#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called through AMateria" << std::endl;
}

Ice::Ice(Ice const & copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice &	Ice::operator=(Ice const & rhs)
{
	std::cout << "Ice assignation operator overloaded called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	std::cout << "Ice clone called. Allocating new Ice" << std::endl;
	AMateria *clone = new Ice(*this);
	return (clone);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}


*/