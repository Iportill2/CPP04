#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{


public:
//CANONICAL
							Cure();
//							Cure(std::string const & type);
							Cure(Cure const & copy);
Cure & 						operator=(Cure const &  inst);
							~Cure();


//std::string const & 	getType() const; //Returns the materia type
virtual 			Cure* 	clone() const;// = 0;
virtual void 				use(ICharacter& target);
};
#endif

/*
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called through AMateria" << std::endl;
}

Cure::Cure(Cure const & copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &	Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure assignation operator overloaded called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	std::cout << "Cure clone called. Allocating new Cure" << std::endl;
	AMateria *clone = new Cure(*this);
	return (clone);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals ";
	std::cout << target.getName() << "'s wounds *" << std::endl;
}


*/