#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "Zombie.hpp"
#include <iostream>

class Zombie
{
public:
	Zombie(std::string name = "Anon", std::string type = "boss");
	~Zombie();
	void			announce();
	std::string		randomChump(void);


private:
	std::string	_name;
	std::string	_type;	
};

#endif