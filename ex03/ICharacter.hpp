#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"
class AMateria;

class ICharacter
{
	//no tiene sting name
/* private:
	std::string _name; */

public:
	//no hay que poner los constructores
/* 		 				ICharacter();
				 		ICharacter(std::string name);
					 	ICharacter(const ICharacter &copy);
	ICharacter & 		operator =(ICharacter const &inst); */
	virtual 			~ICharacter() {};

virtual std::string const & getName() const = 0;
virtual void equip(AMateria* m) = 0;
virtual void unequip(int idx) = 0;
virtual void use(int idx, ICharacter& target) = 0;
};
#endif
