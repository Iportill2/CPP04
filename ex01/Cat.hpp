#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain* _brain;
	
	public:

		Cat();
		Cat(Cat const & copy);
		virtual ~Cat();

		Cat & operator=(Cat const & rhs);
		
		void	makeSound() const;
		std::string	getIdea(int i) const;
		void setCatIdea(std::string idea, int i);
};

#endif