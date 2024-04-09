#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <sstream> //para el tu_string
class AAnimal //: public Cat , public Dog, public WrongAnimal
{
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
		virtual void		makeSound()const ;

		virtual std::string	getIdea(int i) const =0;//

};
#endif
