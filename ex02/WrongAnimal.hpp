#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"
class WrongAnimal:virtual public AAnimal
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

/*
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal(void);

		WrongAnimal & operator =(WrongAnimal const &rhs);

		std::string	getType() const;
		void  		setType(std::string type);
		virtual void		makeSound(void) const;
		
};

#endif

*/