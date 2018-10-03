#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
	this->_type = t;
	return ;
}

Weapon::~Weapon(){return ;}

void	Weapon::setType(std::string t)
{
	this->_type = t;
	return ;
}

std::string const &Weapon::getType(void)
{
	return (this->_type);
}