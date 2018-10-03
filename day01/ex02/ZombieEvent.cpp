#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){return ;}
ZombieEvent::~ZombieEvent(){return ;}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*n = new Zombie(name, this->_type);

	return (n);
}
