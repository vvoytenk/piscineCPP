#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string n, Weapon &v);
	~HumanA();
	
	void	attack(void);

private:
	std::string _name;
	Weapon		&_club;
};

#endif