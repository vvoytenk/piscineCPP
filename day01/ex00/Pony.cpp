#include "Pony.hpp"

 Pony:: Pony(){return ;}
 Pony::~Pony(){return ;}

std::string		Pony::get_name(void)
{
	return(this->_name);
}

std::string		Pony::get_age(void)
{
	return(this->_age);
}

std::string		Pony::get_color(void)
{
	return(this->_color);
}

std::string		Pony::get_owner(void)
{
	return(this->_owner);
}

void			Pony::set_name(std::string data)
{
	this->_name = data;
	return ;
}

void			Pony::set_age(std::string data)
{
	this->_age = data;
	return ;
}

void			Pony::set_color(std::string data)
{
	this->_color = data;
	return ;
}

void			Pony::set_owner(std::string data)
{
	this->_owner = data;
	return ;
}