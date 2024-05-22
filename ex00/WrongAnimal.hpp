#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
class WrongAnimal
{
	protected:
		std::string _type;
	public:
							WrongAnimal();						 //canonical
							WrongAnimal(std::string type);		 //canonical
							WrongAnimal(const WrongAnimal &copy);//canonical
							~WrongAnimal();						 //canonical
		WrongAnimal & 		operator =(WrongAnimal const &inst); //canonical

		void		makeSound()const ;
		std::string 		getType() const;
		void				setType(std::string type);
};
#endif
