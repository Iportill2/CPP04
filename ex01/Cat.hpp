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
		Cat(std::string type);
		Cat(Cat const & copy);
		virtual ~Cat();

		Cat & operator=(Cat const & rhs);
		
		void	makeSound() const;
		std::string	getIdea(int i) const;
		void setCatIdea(std::string idea, int i);

		std::string 		getType() const;
		void				setType(std::string type);
};

#endif