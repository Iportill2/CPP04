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
	while(i < 4 )
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
	while(i < 4 )
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
	//std::cout << "Character Using materia in Character inventory" << std::endl;
	this->_materias[idx]->use(target);
}