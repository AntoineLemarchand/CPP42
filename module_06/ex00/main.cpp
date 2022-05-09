#include <iostream>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <cctype>
#include <cmath>
#include <iomanip>

enum types { typeChar, typeInt, typeFloat, typeDouble, typeOther };

static void	putstatus(std::string charType, std::string intType, std::string floatType, std::string doubleType)
{
	std::cout << "char: " << charType << std::endl;
	std::cout << "int: " << intType << std::endl;
	std::cout << "float: " << floatType << std::endl;
	std::cout << "double: " << doubleType << std::endl;
}

void	putFromChar( std::string toPrint )
{
	std::cout << "char: " << toPrint << std::endl;
	std::cout << "int: " << static_cast<int>(toPrint[0]) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(toPrint[0]) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(toPrint[0]) << std::endl;
}

void	putFromInt( std::string toPrint )
{
	double val = strtod(toPrint.c_str(), NULL);
	if (static_cast<int>(val) >= 0x20 && static_cast<int>(val) <= 0x7e)
		std::cout << "char: " << static_cast<char>(val) << std::endl;
	else
		std::cout << "char:  Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(val) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;
}

void	putFromFloat( std::string toPrint )
{
	double val = strtod(toPrint.c_str(), NULL);
	if (static_cast<int>(val) >= 0x20 && static_cast<int>(val) <= 0x7e)
		std::cout << "char: " << static_cast<char>(val) << std::endl;
	else
		std::cout << "char:  Non displayable" << std::endl;
	if (val > std::numeric_limits<int>::max()
			|| val < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(val) << 'f' << std::endl;
	std::cout << "double: " << val << std::endl;
}

void	putFromDouble( std::string toPrint )
{
	double val = strtod(toPrint.c_str(), NULL);
	if (static_cast<int>(val) >= 0x20 && static_cast<int>(val) <= 0x7e)
		std::cout << "char: " << static_cast<char>(val) << std::endl;
	else
		std::cout << "char:  Non displayable" << std::endl;
	if (val > std::numeric_limits<int>::max()
			|| val < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(val) << 'f' << std::endl;
	std::cout << "double: " << val << std::endl;
}

void	putFromOther( std::string toPrint )
{
	double	val = strtod(toPrint.c_str(), NULL);
	if (!toPrint.compare("+inf") || !toPrint.compare("+inff")
			|| val == HUGE_VAL)
		putstatus("impossible", "impossible", "inff", "inf");
	else if (!toPrint.compare("-inf") || !toPrint.compare("-inff")
			|| val == HUGE_VAL)
		putstatus("impossible", "impossible", "-inff", "-inf");
	else
		putstatus("impossible", "impossible", "nanf", "nan");
}

int	detect( char *s )
{
	double	value;
	char	*pend;

	value = strtod(s, &pend);
	if (strlen(s) == 1 && !isdigit(*s))
		return (typeChar);
	else if (!*pend && !(static_cast<int>(value) - value)
			&& static_cast<int>(value) >= std::numeric_limits<int>::min()
			&& static_cast<int>(value) <= std::numeric_limits<int>::max())
		return (typeInt);
	else if (strlen(pend) == 1 && *pend == 'f'
			&& static_cast<float>(value) >= std::numeric_limits<float>::min()
			&& static_cast<float>(value) <= std::numeric_limits<float>::max())
		return (typeFloat);
	else if (!*pend && value == atof(s))
		return (typeDouble);
	else
		return (typeOther);
}

int main( int ac, char **av )
{
	if (ac != 2)
		std::cout << "Usage: ./cast <arg>" << std::endl;
	else
	{
		std::string toPrint = av[1];
		switch (detect(av[1]))
		{
			case (typeChar):
				putFromChar(toPrint);
				break;
			case (typeInt):
				putFromInt(toPrint);
				break;
			case (typeFloat):
				putFromFloat(toPrint);
				break;
			case (typeDouble):
				putFromDouble(toPrint);
				break;
			case (typeOther):
				putFromOther(toPrint);
				break;
		}
	}
}
