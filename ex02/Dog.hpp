#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

		Brain* _brain;
	
	public:

		Dog();
		Dog(Dog const & copy);
		virtual ~Dog();

		Dog & operator=(Dog const & rhs);
		
		void	makeSound() const;
		std::string	getIdea(int i) const;
		void setDogIdea(std::string idea, int i);
};

#endif