#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"
class Cat :public AAnimal
{
/* 	protected:
		std::string _type; */
	private:
		Brain	*_brain;
	public:
		//CANONICAL
							Cat();
							//Cat(std::string type);
							Cat(const Cat &copy);
		/* virtual */		~Cat();
		Cat & 				operator =(Cat const &inst);

		//std::string getType() const;  //para que quieres gettype si brain no tiene _type??
		
		void				makeSound() const;
		std::string			getIdea(int i) const;
		void  				setIdea(int i, std::string const & idea);
		std::string 		getType() const ;
};
#endif

/*
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{
	private:
		Brain	*_brain;
	
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &copy);
		~Cat(void);

		Cat & operator =(Cat const &rhs);

		void		makeSound(void) const;
		std::string	getIdea(int i) const;
		void  		setIdea(int i, std::string const & idea);
};





#endif
*/