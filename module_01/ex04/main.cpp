#include <iostream>
#include <fstream>
#include <cstring>

std::string	sedLine(const char* str, char* s1, char* s2)
{
	int	i = 0;
	std::string	ret;
	std::string tofind =  std::string(s1);
	std::string repl = std::string(s2);

	if (tofind.size() == 0)
		return (str);
	while (str[i])
	{
		if (!strncmp(str + i, s1, strlen(s1)))
		{
			ret = ret + repl;
			i += strlen(s1);
		}
		else
		{
			std::string tmp = std::string(str + i);
			tmp.resize(1);
			tmp[1] = '\0';
			ret = ret + tmp;
			i++;
		}
	}
	return (ret);
}

int main(int ac, char **av)
{
	std::fstream	input;
	std::fstream	output;

	if (ac != 4)
	{
		std::cerr << "Usage: ./sedlike";
		std::cerr << "<filename> <string_to_replace> <replacement>";
		std::cerr << std::endl;
		return (1);
	}
	input.open(av[1], std::ios::in);
	if (!input)
	{
		std::cerr << "could not access " << av[1] << std::endl;
		return (1);
	}
	std::string	filename = std::string(av[1]) + ".replace";
	output.open(filename.c_str(), std::ios::out);
	if (!output)
	{
		std::cerr << "could not create " << filename << std::endl;
		return (1);
	}
	std::string	line;
	while (getline(input, line))
		output << sedLine(line.c_str(), av[2], av[3]);
	input.close();
	output.close();
}
