#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
class Cat :public Animal
{
	protected:
		std::string _type;
	private:
		Brain	*_brain;
	public:
					Cat();
					Cat(std::string type);
					Cat(const Cat &copy);
		virtual		~Cat();
		Cat & 	operator =(Cat const &inst);

		void		makeSound() const ;
		std::string getType() const;
		void		setType(std::string type);
		std::string	getIdea(int i) const;
		void  		setIdea(int i, std::string const & idea);

};
#endif