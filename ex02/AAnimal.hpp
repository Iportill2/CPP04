#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal //: public Cat , public Dog, public WrongAnimal
{
	/* private:
		AAnimal(); */
	protected:
		std::string _type;
	public:
		//CANONICAL//

							AAnimal();						
							AAnimal(std::string type);		
							AAnimal(const AAnimal &copy);		 
		virtual				~AAnimal();						
							
		AAnimal & 			operator =(AAnimal const &inst);	

		std::string 		getType() const;

		virtual std::string	getIdea(int i) const = 0;//
		virtual void		makeSound()const = 0;
};
#endif
/*

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	AAnimal
{
	protected:
		std::string	type;
	
	public:
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &copy);
		virtual ~AAnimal(void);

		AAnimal & operator =(AAnimal const &inst2);

		std::string	getType() const;
		void  		setType(std::string type);
		virtual std::string	getIdea(int i) const;
		virtual void		makeSound(void) const = 0;
		
};



#endif
*/