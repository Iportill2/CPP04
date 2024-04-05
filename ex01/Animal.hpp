#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
//# include "Brain.hpp"

class Animal //: public Brain
{
	protected:
		std::string _type;
/* 	private:
		Brain	*_brain; */
	public:
							Animal();						//canonical
							Animal(std::string type);		//canonical
							Animal(const Animal &copy);		//canonical
		Animal & 			operator =(Animal const &inst);	//canonical
		virtual				~Animal();						//canonical

		virtual std::string	getIdea(int i) const;
/* 		
		void  				setIdea(int i, std::string const & idea); */
		virtual void		makeSound()const ;

		std::string getType() const;
		void		setType(std::string type);
};
#endif

//Si hay una funcion con virtual, el destructor tiene que ser virtual tbm
/*
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string	type;
	
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &copy);
		virtual ~Animal(void);

		Animal & operator =(Animal const &inst2);

		std::string	getType() const;
		void  		setType(std::string type);
		virtual std::string	getIdea(int i) const;
		virtual void		makeSound(void) const;
		
};



#endif
*/