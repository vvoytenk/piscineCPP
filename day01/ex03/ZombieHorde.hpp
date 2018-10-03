#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();

private:
	int		_N;
	Zombie	*zombies;

};

#endif