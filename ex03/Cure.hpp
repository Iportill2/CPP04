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

