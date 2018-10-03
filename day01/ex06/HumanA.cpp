#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &v): _name(n), _club(v)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_club.getType() << std::endl;
}