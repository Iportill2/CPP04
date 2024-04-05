#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Cat.hpp"
# include "Dog.hpp"
class Brain
{
	private:
		std::string 	_ideas[100];
	public:
	/*CANNONICAL*/
						Brain();
						Brain();
						Brain(const Brain &copy);
						~Brain();
		Brain & 		operator =(Brain const &inst);
	/*GETTER-SETTER*/
		std::string		getIdeas()const ;
		void			setIdeas(std::string ideas);


};
#endif