#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
class Cat :virtual public Animal
{
	public:
					Cat();					//canonical
					Cat(std::string type);	//canonical
					Cat(const Cat &copy);	//canonical
		Cat & 	operator =(Cat const &inst);//canonical
		virtual		~Cat();					//canonical

		virtual void		makeSound() const ;
		std::string getType() const;
		void		setType(std::string type);
};
#endif