#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
public:
	Pony();
	~Pony();

	std::string	get_name(void);
	std::string	get_age(void);
	std::string	get_color(void);
	std::string	get_owner(void);
	void		set_name(std::string);
	void		set_age(std::string);
	void		set_color(std::string);
	void		set_owner(std::string);

private:
	std::string	_name;
	std::string	_age;
	std::string	_color;
	std::string	_owner;
	
};

#endif