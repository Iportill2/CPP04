#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{

}
MateriaSource::MateriaSource(std::string const & type)
{

}
MateriaSource::MateriaSource(MateriaSource const & copy)
{

}
MateriaSource & MateriaSource::operator=(MateriaSource const & inst)
{

}
MateriaSource::~MateriaSource()
{

}




std::string const & MateriaSource::getType() const
{

}
MateriaSource* MateriaSource::clone() const///NO SE SI HAY KE DEFINIRLA AL estar =0 en el hpp
{

}
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