#pragma once
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		const std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( const ShrubberyCreationForm& S );
		ShrubberyCreationForm& operator = ( const ShrubberyCreationForm& S );
		~ShrubberyCreationForm();

		std::string	getTarget() const;

		void	execute(Bureaucrat const & executor) const;
};
