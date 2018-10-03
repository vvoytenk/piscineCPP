#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class 			ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	void		setZombieType(std::string);
	Zombie		*newZombie(std::string);

private:
	std::string	_type;
};

#endif