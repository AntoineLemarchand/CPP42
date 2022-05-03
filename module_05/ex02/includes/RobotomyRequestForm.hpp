#pragma once
#include <cstdlib>
#include <ctime>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm: public Form
{
	private:
		const std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( const RobotomyRequestForm& S );
		RobotomyRequestForm& operator = ( const RobotomyRequestForm& S );
		~RobotomyRequestForm();

		std::string	getTarget() const;

		void	execute(Bureaucrat const & executor) const;
};
