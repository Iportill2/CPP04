#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include "Brain.hpp"
class WrongAnimal : public Brain
{
	protected:
		std::string _type;
	private:
		Brain	*_brain;
	public:
					WrongAnimal();
					WrongAnimal(std::string type);
					WrongAnimal(const WrongAnimal &copy);
		virtual				~WrongAnimal();
		WrongAnimal & 	operator =(WrongAnimal const &inst);

		void		makeSound() const;
		std::string getType() const;
		void		setType(std::string type);

		virtual std::string	getIdea(int i) const;
		void  				setIdea(int i, std::string const & idea);

};
#endif