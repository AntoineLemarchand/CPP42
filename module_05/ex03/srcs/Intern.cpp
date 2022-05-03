#include "Intern.hpp"

Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string	formType[3] = 
	{ 
		"shrubbery creation", 
		"robotomy request", 
		"presidential pardon"
	};
	Form	*create[3] = 
	{ 
		new	ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};

	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(formType[i]))
		{
			for (int j = 0; j < 3; j++)
				if (i != j)
					delete create[j];
			return (create[i]);
		}
	}
	for (int j = 0; j < 3; j++)
		delete create[j];
	throw NonExistentForm();
};

const char* Intern::NonExistentForm::what() const throw()
{
	return ("this form does not exist");
};
