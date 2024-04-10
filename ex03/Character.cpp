//#include "ICharacter.hpp"

/*
class AMateria;

class Character : Public ICharacter
{
private:
std:: string 				_name;		//nombre del pj
AMateria 					*_materias[4];	//numero de materias que puede almacenar el pj



public:
//CANONICAL//
							Character();
							Character(std::string const & type);
					 		Character(const ICharacter &copy);
Character & 				operator =(Character const &inst);
							~Character();



std::string const & 		getName() const;
void 						equip(AMateria* m);
void 						unequip(int idx);
void 						use(int idx, ICharacter& target);
};
*/
#include "Character.hpp"
Character::Character() : _name("Default name")
{
	std::cout << "Default Character Constructor named " << this->_name << std::endl;
	int i = 0;
	while(i <= 3)
	{
		this->_materias[i]= NULL;
		i++;
	}
}
Character::Character(std::string const & type) : _name(type)
{
	std::cout << "Character Constructor named " << this->_name <<std::endl;
	int i = 0;
	while(i <= 3)
	{
		this->_materias[i]= NULL;
		i++;
	}
}
Character::Character(const Character &copy)
{
	std::cout << "Character copy named "<< this->_name << std::endl;
	*this = copy;
}
Character & Character::operator =(Character const &inst)
{
	std::cout << "Character operator =" << std::endl;
	this->_name = inst.getName();
	int i =0;
	while(i <= 3 )
	{
		if(this->_materias[i]!= NULL)
		{
			std::cout << "Deleting materia in Character inventory" << std::endl;
			delete this->_materias[i];
		}
		this->_materias[i] = inst._materias[i]->clone();
		i++;
	}
	return(*this);
}
Character::~Character()
{
	std::cout << "Character Destructor named " << this->_name << std::endl;	
	int i =0;
	while(i <= 3 )
	{
		if(this->_materias[i]!= NULL)
		{
			std::cout << "Deleting materia in Character inventory" << std::endl;
			delete this->_materias[i];
		}
		i++;
	}
}



std::string const & Character::getName() const
{
	std::cout << "Character " << this->_name << " getName" << std::endl;
	return(this->_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	//if (!m)
	if( m == NULL)
	{
		std::cout << "Character Can't equip NULL materia" << std::endl;
		return ;
	}
	while ( i <= 3)
	{
		if (!this->_materias[i])//
		{
			std::cout << "Character Equipping materia in Character inventory" << std::endl;
			this->_materias[i] = m;
			return ;
		}
		i++;
	}
	std::cout << "Character equip inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Character unequip Invalid index" << std::endl;
		return ;
	}
	if (!this->_materias[idx])
	{
		std::cout << "Character No materia in this slot" << std::endl;
		return ;
	}
	std::cout << "Character Unequipping materia in Character inventory" << std::endl;
	this->_materias[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Character Invalid index" << std::endl;
		return ;
	}
	if (!this->_materias[idx])
	{
		std::cout << "Character No materia in this slot" << std::endl;
		return ;
	}
	std::cout << "Character Using materia in Character inventory" << std::endl;
	this->_materias[idx]->use(target);
}