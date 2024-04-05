#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"
class Dog:public Animal
{
	protected:
		std::string _type;
	private:
		Brain	*_brain;
	public:
					Dog();
					Dog(std::string type);
					Dog(const Dog &copy);
		Dog & 		operator =(Dog const &inst);
		virtual				~Dog();

		void		makeSound() const ;

		std::string	getIdea(int i) const;
		void  		setIdea(int i, std::string const & idea);
		
		std::string getType() const;
		void		setType(std::string type);
};
#endif