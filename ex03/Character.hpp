#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;

class Character : public ICharacter
{
private:
std:: string 				_name;		//nombre del pj
AMateria 					*_materias[4];	//numero de materias que puede almacenar el pj

/* protected: */

public:
//CANONICAL//
							Character();
							Character(std::string const & type);
					 		Character(const Character &copy);
Character & 				operator =(Character const &inst);
							~Character();



std::string const & 		getName() const;
void 						equip(AMateria* m);
void 						unequip(int idx);
void 						use(int idx, ICharacter& target);
};
#endif
