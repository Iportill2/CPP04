#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
/* # include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp" */

class Animal //: public Cat , public Dog, public WrongAnimal
{
	protected:
		std::string _type;
	public:
		//CANONICAL//
							Animal();						
							Animal(std::string type);		
							Animal(const Animal &copy);		
		Animal & 			operator =(Animal const &inst);	
		virtual				~Animal();						

		virtual std::string	getIdea(int i) const;
		virtual void		makeSound()const ;
		std::string 		getType() const;
};
#endif