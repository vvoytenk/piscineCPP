#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	this->_name = n;
	return ;
}

HumanB::~HumanB(){return ;}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_club->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &v)
{
	this->_club = &v;
}