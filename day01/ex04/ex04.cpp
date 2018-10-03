
#include <iostream>

int				main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*p = &str;
	std::string	&ref = str;
	std::cout << str << "\n" << *p << "\n" << ref << std::endl;
	return(0);
}
