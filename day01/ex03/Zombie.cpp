#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	if (name == "Anon")
		name = randomChump();
	this->_name = name;
	this->_type = type;
	std::cout << "A new zombie is near!" << std::endl;
	this->announce();
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie is dead!" << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type
	<< ")" << "> " << "Braiiiiiiinnnssss..." << std::endl;
}

std::string		Zombie::randomChump(void)
{
	int i = rand() % 5;
	std::string	array[] = {"Elon Mask", "Harry Potter", "Pipin", "Fikus", "Your mom"};
	return(array[i]);
}