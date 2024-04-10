#ifndef CURE_HPP
# define CURE_HPP
class Cure //: virtual Public ICharacter
{
protected:

public:
Cure(std::string const & type);

std::string const & 	getType() const; //Returns the materia type
virtual 			Cure* clone() const = 0;
//virtual void use(ICharacter& target);
};
#endif