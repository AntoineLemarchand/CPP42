#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( const PresidentialPardonForm& S );
		PresidentialPardonForm& operator = ( const PresidentialPardonForm& S );
		~PresidentialPardonForm();

		std::string	getTarget( void ) const;

		void	execute(Bureaucrat const & executor) const;
};
