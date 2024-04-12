#include "Cure.hpp"
/*
#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & copy);
		virtual ~Cure(void);
		Cure &	operator=(Cure const & rhs);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& target);
};


#endif
*/
Cure::Cure(): AMateria("cure")
{
	std::cout << "Default Cure Constructor" << std::endl;
}
Cure::Cure(Cure const & copy)
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