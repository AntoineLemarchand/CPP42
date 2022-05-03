#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	PresidentialPardonForm	P1 = PresidentialPardonForm("Minishell");
	RobotomyRequestForm		R1 = RobotomyRequestForm("CPP04");
	ShrubberyCreationForm	S1 = ShrubberyCreationForm("bonsai");

	Bureaucrat President = Bureaucrat("President", 1);
	Bureaucrat Assistant = Bureaucrat("Assistant", 45);
	Bureaucrat Intern = Bureaucrat("Intern", 130);

	std::cout << President << std::endl;
	std::cout << Assistant << std::endl;
	std::cout << Intern << std::endl;

	std::cout << P1 << std::endl;
	std::cout << R1 << std::endl;
	std::cout << S1 << std::endl;

	std::cout << "━━ Signing contracts ━━" << std::endl;
	Intern.signForm(P1);
	Assistant.signForm(R1);
	President.signForm(S1);
	std::cout << "━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;

	std::cout << P1 << std::endl;
	std::cout << R1 << std::endl;
	std::cout << S1 << std::endl;
	
	std::cout << "━━ executing contracts ━━" << std::endl;
	President.executeForm(P1);
	Assistant.executeForm(R1);
	Intern.executeForm(S1);
	std::cout << "━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;
}
