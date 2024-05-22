#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
private:
	AMateria		*_materias[4];
public:
	//CANONICAL//
					MateriaSource();
					//MateriaSource(std::string const & type);
					MateriaSource(MateriaSource const & copy);
	MateriaSource &	operator=(MateriaSource const & inst);
			virtual ~MateriaSource(void);

		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);
//std::string const & getType() const; //Returns the materia type
//virtual MateriaSource* clone() const ;//= 0
//virtual void use(ICharacter& target);
};
#endif

