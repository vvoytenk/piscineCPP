#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <iostream>
#include <algorithm>
#include <vector>

class span
{
public:
	span(unsigned int N);
	span(span const &src);
	span &operator=(span const &src);
	virtual ~span();

	void		addNumber(int n);
	int			shortestSpan(void);
	int			longestSpan(void);

	std::vector<int>::iterator		getMax(std::vector<int> &vec);
	std::vector<int>::iterator		getMin(std::vector<int> &vec);



private:
	unsigned int			_N;
	std::vector<int>		v;


};

#endif