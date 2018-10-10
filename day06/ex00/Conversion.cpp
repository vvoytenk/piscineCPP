#include "Conversion.hpp"

Conversion::Conversion()
{
	return ;
}

Conversion::Conversion(Conversion const &src)
{
	*this = src;
}

Conversion &Conversion::operator=(Conversion const &src)
{
	_char = src._char;
	_int = src._int;
	_double = src._double;
	_float = src._float;
	return(*this);
}

Conversion::~Conversion()
{
	return ;
}

int 	Conversion::convert_to_int(char *s) const
{
	int i = 0;

	try
	{
		i = std::stoi(s);
	}
	catch (const std::exception &e)
	{
		throw (Error());
	}
	return (i);
}

double	Conversion::convert_to_double(char *s) const
{
	double d = 0.0;

	try
	{
		d = std::stof(s);
	}
	catch(std::exception &e)
	{
		throw (Error());
	}
	return (static_cast<double>(d));
}

float	Conversion::convert_to_float(char *s) const
{
	float f = 0.0;

	try
	{
		f = std::stof(s);
	}
	catch(std::exception &e)
	{
		throw (Error());
	}
	return (static_cast<float >(f));
}

char	Conversion::convert_to_char(char *s) const
{
	int i = 0;

	try
	{
		i = std::stoi(s);
		if (i < 33)
		{
			std::cout << "Non displayable" ;
		}
	}
	catch (const std::exception &e)
	{
		throw (Error());
	}
	return (static_cast<char>(i));
}

Conversion::
Error::Error()
{
	return ;
}

Conversion::
Error::~Error() throw()
{
	return ;
}

Conversion::
Error::Error(Error const &src)
{
	*this = src;
}

Conversion::Error &Conversion::Error::operator=(Error const &src)
{
	static_cast <void>(src);
	return (*this);
}

const char *Conversion::Error::what() const throw()
{
	return ("impossible");
}

