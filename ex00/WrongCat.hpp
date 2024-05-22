#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"
class WrongCat :public WrongAnimal
{
	public:
					WrongCat();					        //canonical
					WrongCat(std::string type);	        //canonical
					WrongCat(const WrongCat &copy);     //canonical
		WrongCat & 	operator =(WrongCat const &inst);   //canonical
		        	~WrongCat();				        //canonical

		void		makeSound() const ;
		std::string getType() const;
		void		setType(std::string type);
};
#endif