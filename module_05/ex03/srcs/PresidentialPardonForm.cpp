#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Pres", 25, 5), _target("default")
{
	std::cerr << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Pres", 25, 5), _target(target)
{
	std::cerr << "PresidentialPardonForm target created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& S ): Form(S.getName(), S.getSign(), S.getExec()), _target(S.getTarget())
{
	std::cerr << "PresidentialPardonForm copy created" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator = ( const PresidentialPardonForm& S )
{
	*this = PresidentialPardonForm(S);
	std::cerr << "PresidentialPardonForm equal created" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cerr << "PresidentialPardonForm destroyed" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= Form::getExec() && Form::getSigned())
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else if (!Form::getSigned())
		throw Form::FormNotSigned();
	else
		throw Form::GradeTooLowException();
}
