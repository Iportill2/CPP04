#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria //: virtual Public ICharacter
{
protected:// private: NO PUEDEN ACCEDER DESDE CURE 
	std::string _type;
public:
//CANONICAL//
						AMateria();
						AMateria(std::string const & type);
						AMateria(const AMateria &copy);
	AMateria & 			operator =(AMateria const &inst);
	virtual				~AMateria();		

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
#endif
