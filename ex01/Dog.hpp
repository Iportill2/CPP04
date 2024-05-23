#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

		Brain* _brain;
	
	public:

		Dog();
		Dog(std::string type);
		Dog(Dog const & copy);
		virtual ~Dog();

		Dog & operator=(Dog const & rhs);
		
		void	makeSound() const;
		std::string	getIdea(int i) const;
		void setDogIdea(std::string idea, int i);

		std::string 		getType() const;
		void				setType(std::string type);
};

#endif