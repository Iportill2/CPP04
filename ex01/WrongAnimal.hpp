#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
class WrongAnimal
{
	protected:
		std::string _type;
	public:
					WrongAnimal();
					WrongAnimal(std::string type);
					WrongAnimal(const WrongAnimal &copy);
		virtual				~WrongAnimal();
		WrongAnimal & 	operator =(WrongAnimal const &inst);

		void		makeSound() const;
		std::string getType() const;
		void		setType(std::string type);
};
#endif