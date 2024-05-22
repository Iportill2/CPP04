#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
class Ice : public AMateria
{


public:
//CANONICAL//
						Ice();
//NO TIENE Type//private Ice(std::string type);
						Ice(Ice const & copy);
Ice & 					operator=(Ice const & inst);
						~Ice();


virtual	Ice*			clone() const ;
virtual void			use(ICharacter& target);
};
#endif