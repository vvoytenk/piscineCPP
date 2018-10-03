 #include "Brain.hpp"

Brain::Brain(){return ;}
Brain::~Brain(){return ;}

std::string Brain::identify(void)
{
	return this->_addr;
}

void	Brain::setBrain(void) {

	std::stringstream	addr;
	
	addr << this;
	this->_addr = addr.str();
	return ;
}
