#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor" << std::endl;
}
/* MateriaSource::MateriaSource(std::string const & type)
{
	std::cout << "MateriaSource constructor" << std::endl;
} */
MateriaSource::MateriaSource(MateriaSource const & copy)
{
	std::cout << "Default MateriaSource constructor" << std::endl;
	*this = copy;
	return;
}
MateriaSource & MateriaSource::operator=(MateriaSource const & inst)
{
	std::cout << "MateriaSource assignation operator overloaded called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (inst._materias[i])
			this->_materias[i] = inst._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return (*this);
}
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor" << std::endl;
}


void		MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
	{
		std::cout << "learnMateria called in MateriaSource. materia is NULL" << std::endl;
		return ;
	}

	for (int i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = materia;
			std::cout << "MateriaSource learnMateria called. ";
			std::cout << "Learnt: " << this->_materias[i]->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Can't learn more materias" << std::endl;
	delete materia;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
		{
			std::cout << "MateriaSource createMateria called. ";
			std::cout << "Created: " << this->_materias[i]->getType() << std::endl;
			return (this->_materias[i]->clone());
		}
	}
	std::cout << "MateriaSource createMateria called. ";
	std::cout << "Materia not found" << std::endl;
	return (NULL);
}

/* std::string const & MateriaSource::getType() const
{
	std::cout << "Default MateriaSource constructor" << std::endl;
	return(_type);
} */
/* MateriaSource* MateriaSource::clone() const///NO SE SI HAY KE DEFINIRLA AL estar =0 en el hpp
{
	std::cout << "Cure clone called. Allocating new Cure" << std::endl;
	MateriaSource *clone = new MateriaSource(*this);
	return (clone);
} */
/*
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materias[4];
	
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & copy);
		virtual ~MateriaSource(void);
		MateriaSource &	operator=(MateriaSource const & rhs);

		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);

};

#endif
*/