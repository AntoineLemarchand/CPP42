#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("form"), _sign(1), _exec(1)
{
	_signed = false;
	std::cerr << "Form constructed" << std::endl;
}

Form::Form(const Form& form): _name(form.getName()), _sign(form.getSign()), _exec(form.getExec())
{
	std::cerr << "Form copy constructed" << std::endl;
	_signed = form.getSigned();
}

Form& Form::operator = (const Form& form)
{
	std::cerr << "Form equal constructed" << std::endl;
	if (this != &form)
		*this = Form(form);
	return (*this);
}

Form::~Form()
{
	std::cerr << "Form destroyed" << std::endl;
}

std::string		Form::getName() const
{
	return (_name);
}

bool			Form::getSigned() const
{
	return (_signed);
}

unsigned int	Form::getSign() const
{
	return (_sign);
}

unsigned int	Form::getExec() const
{
	return (_exec);
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= _sign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade should be above 0");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade should be below 150");
}

std::ostream&	operator << ( std::ostream& out, const Form& form )
{
	out << "Form: " << form.getName();
	if (!form.getSigned())
		out << " not signed";
	else
		out << " signed";
	return (out);
}
