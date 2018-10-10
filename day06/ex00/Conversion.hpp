#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <iomanip>

class Conversion
{
public:
	Conversion();
	Conversion(Conversion const &src);

	Conversion &operator=(Conversion const &src);

	int 	convert_to_int(char *s) const;
	double	convert_to_double(char *s) const;
	float	convert_to_float(char *s) const;
	char	convert_to_char(char *s) const;

	 virtual ~Conversion();

	class Error : public std::exception
	{
	public:
		Error();
		Error(Error const &src);

		Error &operator=(Error const &scr);

		virtual ~Error() throw();

		virtual const char* what() const throw();
		
	};

private:
	char	_char;
	int		_int;
	double	_double;
	float	_float;

	
};

#endif