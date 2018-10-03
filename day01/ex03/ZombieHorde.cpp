#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _N(n)
{
	this->zombies = new Zombie[n];
}

ZombieHorde::~ZombieHorde()
{
	delete [] zombies;
	return ;
}