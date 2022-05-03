#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

void	testForm()
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃   Form exceptions   ┃" << std::endl;
	std::cout << "┗━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
	Form F;
	Bureaucrat B1 = Bureaucrat("B1", 1);
	Bureaucrat B2 = Bureaucrat("B1", 150);

	B2.signForm(F);
	std::cout << F << std::endl;
	B1.signForm(F);
	std::cout << F << std::endl;
}

int	main()
{
	testForm();
}
