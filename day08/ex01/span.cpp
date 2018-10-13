#include "span.hpp"

span::span(unsigned int N) : _N(N)
{
	return ;
}

span::span(span const &src)
{
	*this = src;
}

span &span::operator=(span const &src)
{
	_N = src._N;
	return (*this);
}

span::~span()
{
	return ;
}

void	span::addNumber(int n)
{
	if (this->v.size() < this->_N)
		this->v.push_back(n);
	else
		throw std::exception();
}

int		span::shortestSpan(void)
{
	std::vector<int>		tmp;
	tmp = v;
	if (_N < 2)
		throw std::exception();
	std::vector<int>::iterator min1 = getMin(v);
	int qw = *min1;

	tmp.erase(getMin(tmp));
	std::vector<int>::iterator min2 = getMin(tmp);
	return (*min2 - qw);
}

int		span::longestSpan(void)
{
	if (_N < 2)
		throw std::exception();
	std::vector<int>::iterator min_i = getMin(v);
	std::vector<int>::iterator	max_i = getMax(v);
	return (*max_i - *min_i);
}

std::vector<int>::iterator		span::getMax(std::vector<int> &vec)
{	
	return (max_element(vec.begin(), vec.end()));
}

std::vector<int>::iterator		span::getMin(std::vector<int> &vec)
{
	return (min_element(vec.begin(), vec.end()));
}