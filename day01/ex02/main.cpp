#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int				main(void)
{
	Zombie 	uno("Anon", "boss");
	Zombie	*due;
	ZombieEvent  event;

	event.setZombieType("bloody");
	due = event.newZombie("Fikus");
	uno.announce();
	due->announce();
	delete(due);
	return (0);
}