#ifndef ICE_HPP
# define ICE_HPP
class Ice //: virtual Public ICharacter
{
protected:

public:
Ice(std::string const & type);

std::string const & 	getType() const; //Returns the materia type
virtual 			Ice* clone() const = 0;
//virtual void use(ICharacter& target);
};
#endif