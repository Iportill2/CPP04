#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"
class WrongAnimal:public Animal
{
	protected:
		std::string _type;
	private:
		Brain	*_brain;
	public:
		//CANONICAL//
					WrongAnimal();
					WrongAnimal(const WrongAnimal &copy);
		virtual				~WrongAnimal();
		WrongAnimal & 		operator =(WrongAnimal const &inst);

		void		makeSound() const ;
		std::string getType() const;

		std::string	getIdea(int i) const;
		void  		setIdea(int i, std::string const & idea);
	
};
#endif