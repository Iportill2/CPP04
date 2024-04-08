#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"
class Dog:public AAnimal
{
	protected:
		std::string _type;
	private:
		Brain	*_brain;
	public:
					Dog();
					Dog(const Dog &copy);
		virtual				~Dog();
		Dog & 		operator =(Dog const &inst);

		void		makeSound() const ;
		std::string getType() const;

		std::string	getIdea(int i) const;
		void  		setIdea(int i, std::string const & idea);
};
#endif

/*

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
 
class	Dog : public AAnimal
{
	private:
		Brain	*_brain;
	
	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &copy);
		~Dog(void);

		Dog & operator =(Dog const &rhs);

		void		makeSound(void) const;
		std::string	getIdea(int i) const;
		void  		setIdea(int i, std::string const & idea);
};

#endif
*/