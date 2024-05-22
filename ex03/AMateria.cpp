#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor" << std::endl;
}
AMateria::AMateria(std::string const & type) : _type(type)
{
		std::cout << "AMateria constructor" << std::endl;
}
AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria copy" << std::endl;
	*this = copy;
	return;
}

AMateria & AMateria::operator =(AMateria const &inst)
{
	std::cout << "AMateria operator=" << std::endl;
	this->_type = inst.getType();
	return *this;
}
AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}


std::string const & AMateria::getType() const
{

	return(this->_type);
}

void AMateria::use(ICharacter& target)
{

	if(this->_type == "Ice")
		std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
	else if(this->_type == "Cure")
		std::cout << "heals " << target.getName() << " `s  wounds "<< std::endl;
	else
		std::cout << "Be sure how to type the materia type" << std::endl;
}