#pragma once
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Form*	makeForm(std::string name, std::string target);

		class NonExistentForm: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
