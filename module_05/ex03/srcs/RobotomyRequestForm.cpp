#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(): Form("Robo", 72, 45), _target("default")
{
	std::cerr << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robo", 72, 45), _target(target)
{
	std::cerr << "RobotomyRequestForm target created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& S ): Form(S.getName(), S.getSign(), S.getExec()), _target(S.getTarget())
{
	std::cerr << "RobotomyRequestForm copy created" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator = ( const RobotomyRequestForm& S )
{
	*this = RobotomyRequestForm(S);
	std::cerr << "RobotomyRequestForm equal created" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cerr << "RobotomyRequestForm destroyed" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= Form::getExec() && Form::getSigned())
	{
		std::srand(time(NULL));

		bool prob = rand() % 2;
		std::cout << "BBBBBBBZZZZZZBRGZZBZBZBZ" << std::endl;
		if (prob)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << _target << " robotomization has failed" << std::endl;
	}
	else if (!Form::getSigned())
		throw Form::FormNotSigned();
	else
		throw Form::GradeTooLowException();
}
