#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string n);
	~HumanB();
	
	void	attack(void);
	void	setWeapon(Weapon &v);
private:
	std::string _name;
	Weapon		*_club;
};

#endif