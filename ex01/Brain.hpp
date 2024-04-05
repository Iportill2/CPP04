#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
class Brain
{
	private:
		std::string 	_ideas[100];
	public:
	/*CANNONICAL*/
						Brain();

						Brain(const Brain &copy);
						~Brain();
		Brain & 		operator =(Brain const &inst);
	/*GETTER-SETTER*/
		std::string		getIdea(int i)const ;
		void			setIdea(int i, std::string const & idea);


};
#endif

/*

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string		_ideas[100];
		
	public:
		Brain(void);
		Brain(const Brain &copy);
		~Brain(void);

		Brain & operator =(Brain const &rhs);

		std::string	getIdea(int i) const;
		void  		setIdea(int i, std::string const & idea);

};



#endif

*/