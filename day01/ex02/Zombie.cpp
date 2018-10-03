#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	if (name == "Anon")
		name = randomChump();
	this->_name = name;
	this->_type = type;
	return ;
}

Zombie::~Zombie(){return ;}

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