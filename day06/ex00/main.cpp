#include "Conversion.hpp"

int	main (int argc, char **argv)
{
	Conversion cast;

	if (argc != 2)
		std::cout << "Wrong number of arguments. Try again!" << std::endl;
	else
	{
		// if (argv[1][0] >= 33 && argv[1][0] <= 126)
		// 	std::cout << "char: '" << cast.convert_to_char(argv[1]) << "'"<< std::endl;
		// else
			// std::cout << "char: Non displayable" << std::endl;
		try
		{

			std::cout << "char: " << cast.convert_to_char(argv[1]) << std::endl;
		}
		catch (Conversion::Error &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "int: " << cast.convert_to_int(argv[1]) << std::endl;
		}
		catch (Conversion::Error &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "float: " << std::fixed << std::setprecision(1) << cast.convert_to_float(argv[1])<< "f" << std::endl;
		}
		catch (Conversion::Error &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "double: " << cast.convert_to_double(argv[1]) << std::endl;
		}
		catch (Conversion::Error &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}