#ifndef HUMAN_CPP
# define HUMAN_CPP

#include "Brain.hpp"

class Human
{
public:
	Human();
	~Human();
	
	std::string identify();
	Brain	getBrain(void);

private:
	Brain	_brain;
};

# endif