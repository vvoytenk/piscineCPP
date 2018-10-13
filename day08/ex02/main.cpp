#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5); //добавление элемента
	mstack.push(17); 

	std::cout << mstack.top() << std::endl; // вывод верхнего элемента

	mstack.pop(); //удаление верхнего элемента

	std::cout << mstack.size() << std::endl; //размер 

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin(); //итератор начала
	MutantStack<int>::iterator ite = mstack.end(); //интератор конца

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl << "*******************" << std::endl;
	std::list<int>	lmstack;

	lmstack.push_front(5);
	lmstack.push_front(17);
	std::cout << lmstack.front() << std::endl;
	lmstack.pop_front();
	std::cout << lmstack.size() << std::endl;
	lmstack.push_front(3);
	lmstack.push_front(5);
	lmstack.push_front(737);
	//[...]
	lmstack.push_front(0);

	MutantStack<int>::iterator lit = lmstack.begin();
	MutantStack<int>::iterator lite = lmstack.end();
	++lit;
	--lit;

	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::stack<int> ls(mstack);
	
	return 0;
}