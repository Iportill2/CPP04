#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
class Dog:virtual public Animal
{
	public:
					Dog();					//canonical
					Dog(std::string type);	//canonical
					Dog(const Dog &copy);	//canonical
		Dog & 	operator =(Dog const &inst);//canonical
		virtual				~Dog();			//canonical

		virtual void		makeSound() const ;
		std::string 		getType() const;
		void				setType(std::string type);
};
#endif