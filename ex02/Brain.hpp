#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream> //para ss.str

class Brain
{
	private:
		std::string	_ideas[100];
	
	public:

		Brain();
		Brain(Brain const & copy);
		~Brain();

		Brain & operator=(Brain const & rhs);

		std::string	getIdeas(int i);
		void		setIdeas(int i, std::string idea);		
};

#endif