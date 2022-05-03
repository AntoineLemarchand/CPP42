#include <iostream>
#include "Bureaucrat.hpp"

void	testSetGrade()
{
	Bureaucrat b1 = Bureaucrat("b1");

	std::cout << b1 << std::endl;
	try 
	{
		b1.setGrade(-1);
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		b1.setGrade(152);
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b1 << std::endl;
	try 
	{
		b1.setGrade(52);
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b1 << std::endl;
}

void	testOverloads()
{
	Bureaucrat b1 = Bureaucrat("b1");

	std::cout << b1 << std::endl;
	try 
	{
		b1.setGrade(150);
		b1.downGrade();
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b1 << std::endl;
	try 
	{
		b1.setGrade(1);
		b1.upGrade();
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b1 << std::endl;
	try 
	{
		b1.setGrade(1);
		b1.downGrade();
		b1.upGrade();
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b1 << std::endl;
}

int	main()
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃ setGrade exceptions ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
	testSetGrade();
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃ Increment exceptions ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
	testOverloads();
}
