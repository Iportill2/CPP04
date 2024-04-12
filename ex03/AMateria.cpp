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
	//std::cout << "AMateria " << this->getType() << std::endl;
	return(this->_type);
}
/* AMateria::AMateria* clone() const //NO LA DEFINIMOS PARA CREAR AMATERIA COMO CLASE ABSTRACTA
{
	std::cout << "AMateria clone" << std::endl;
} */
void AMateria::use(ICharacter& target)
{
	std::cout << " AMateria use " << std::endl;

	std::cout << "* shoots 🤷 at ";//
	std::cout << target.getName() << " *" << std::endl;//
}