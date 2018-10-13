#include "easyfind.hpp"
#include <set>
#include <list>
#include <vector>

int	 main()
{
	 std::list<int>		lst;
	 std::vector<int>	vec;

	 std::cout << "<<<< List-container >>>>" << std::endl;

	 lst.push_back(1);
	 lst.push_back(2);
	 lst.push_back(4);
	 lst.push_back(8);
	 lst.push_back(16);

	try
	{
		easyfind(lst, 1);
	}
	 catch(std::exception)
	{
		std::cout << "Element has not be fount in container." << std::endl;
	}

	std::cout << "<<<< Vector-container >>>>" << std::endl;

	vec.push_back(42);
	vec.push_back(4);
	vec.push_back(2);
	vec.push_back(0);
	vec.push_back(-7);
	vec.push_back(1024);

	try
	{
		easyfind(vec, 1);
	}
	 catch(std::exception)
	{
		std::cout << "Element has not be fount in container." << std::endl;
	}
}