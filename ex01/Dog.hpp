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
					//Dog() : Animal("Dog") 
        // código de inicialización específico de Dog
    
					Dog(const Dog &copy);
		virtual				~Dog();
		Dog & 		operator =(Dog const &inst);

		void		makeSound() const ;
		std::string getType() const;

		std::string	getIdea(int i) const;
		void  		setIdea(int i, std::string const & idea);
};
#endif