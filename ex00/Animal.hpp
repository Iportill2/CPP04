#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
class Animal
{
	protected:
		std::string _type;
	public:
							Animal();						//canonical
							Animal(std::string type);		//canonical
							Animal(const Animal &copy);		//canonical
		virtual				~Animal();						//canonical
		Animal & 			operator =(Animal const &inst);	//canonical

		virtual void		makeSound()const ;
		std::string 		getType() const;
		void				setType(std::string type);
};
#endif

//Si hay una funcion con virtual, el destructor tiene que ser virtual tbm
