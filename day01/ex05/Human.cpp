
#include "Human.hpp"

Human::Human() {
	this->_brain.setBrain();
	return ;
}

Human::~Human(){return ;}

std::string Human::identify()
{
	return (this->_brain.identify());
}

Brain Human::getBrain()
{
	return (this->_brain);
}
