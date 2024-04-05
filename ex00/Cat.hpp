#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
class Cat :virtual public Animal
{
	protected:
		std::string _type;
	public:
					Cat();
					Cat(std::string type);
					Cat(const Cat &copy);
		virtual		~Cat();
		Cat & 	operator =(Cat const &inst);

		void		makeSound() const ;
		std::string getType() const;
		void		setType(std::string type);
};
#endif