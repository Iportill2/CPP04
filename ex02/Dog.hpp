#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"
class Dog:public AAnimal
{
	protected:
		std::string _type;
	private:
		Brain	*_brain;
	public:
		//CANONICAL//
					Dog();
					//Dog(std::string type);	
					Dog(const Dog &copy);
		/* virtual */~Dog();
		Dog & 		operator =(Dog const &inst);

		void		makeSound() const ;
		std::string getType() const;

		std::string tu_string(int value) const;

		std::string	getIdea(int i) const;//Definimos en el cpp los que hace getIdea
		void  		setIdea(int i, std::string const & idea);

};
#endif
