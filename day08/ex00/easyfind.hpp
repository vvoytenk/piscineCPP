
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
void easyfind(T container, int value)
{
	typename T::iterator it;

	it = find(container.begin(),container.end(), value);
	if (it != container.end())
		std::cout << "Element " << *it << " has been found in container." << std::endl;
	else
		throw std::exception();
}

#endif