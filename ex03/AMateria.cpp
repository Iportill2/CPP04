#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor" << std::endl;
}
AMateria::AMateria(std::string const & type)
{
		std::cout << "AMateria constructor" << std::endl;
}
AMateria::AMateria(const AMateria &copy)
{
		std::cout << "AMateria copy" << std::endl;
}
AMateria & AMateria::operator =(AMateria const &inst)
{
		std::cout << "AMateria operator=" << std::endl;
}
AMateria::~AMateria()
{
		std::cout << "AMateria destructor" << std::endl;
}


std::string const & AMateria::getType() const
{
	std::cout << "AMateria getType" << std::endl;
}
/* AMateria::AMateria* clone() const //NO LA DEFINIMOS PARA CREAR AMATERIA COMO CLASE ABSTRACTA
{
	std::cout << "AMateria clone" << std::endl;
} */
void AMateria::use(ICharacter& target)
{
	std::cout << "Default AMateria constructor" << std::endl;
}