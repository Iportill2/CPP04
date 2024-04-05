#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
class Dog:virtual public Animal
{
	protected:
		std::string _type;
	public:
					Dog();
					Dog(std::string type);
					Dog(const Dog &copy);
		virtual				~Dog();
		Dog & 	operator =(Dog const &inst);

		void		makeSound() const ;
		std::string getType() const;
		void		setType(std::string type);
};
#endif