#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	Intern	I1;

	Form*	P1;
	Form*	R1;
	Form*	S1;

	P1 = I1.makeForm("presidential pardon", "Minishell");
	R1 = I1.makeForm("robotomy request", "CPP04");

	try
	{
		S1 = I1.makeForm("shubbery creation", "bonsai");
	}
	catch (const Intern::NonExistentForm& e)
	{
		std::cout << e.what() << std::endl;
	}

	S1 = I1.makeForm("shrubbery creation", "bonsai");

	std::cout << *P1 << std::endl;
	std::cout << *R1 << std::endl;
	std::cout << *S1 << std::endl;
	
	delete P1;
	delete R1;
	delete S1;
}
