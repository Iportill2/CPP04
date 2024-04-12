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
/*
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <sstream> //para el tu_string
class AAnimal //: public Cat , public Dog, public WrongAnimal
{
	protected:
		std::string _type;
	public:
		//CANONICAL//

							AAnimal();						
							AAnimal(std::string type);		
							AAnimal(const AAnimal &copy);		 
		virtual				~AAnimal();										
		AAnimal & 			operator =(AAnimal const &inst);	

		std::string 		getType() const;
		virtual void		makeSound()const ;

		virtual std::string	getIdea(int i) const =0;//

};
#endif
*/