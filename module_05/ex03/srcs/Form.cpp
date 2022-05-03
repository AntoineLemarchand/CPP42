#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("form"), _sign(1), _exec(1)
{
	_signed = false;
	std::cerr << "Form constructed" << std::endl;
}

Form::Form(std::string name, int sign, int exec): _name(name), _sign(sign), _exec(exec)
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
	(void)form;
	std::cerr << "please use copy constructor on abstract class" << std::endl;
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

int	Form::getSign() const
{
	return (_sign);
}

int	Form::getExec() const
{
	return (_exec);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= _sign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* Form::FormNotSigned::what() const throw()
{
	return ("Form needs to be signed to be executed");
}

std::ostream&	operator << ( std::ostream& out, const Form& form )
{
	out << "Form: " << form.getName();
	out << " sign: " << form.getSign();
	out << " exec: " << form.getExec();

	if (!form.getSigned())
		out << " not signed";
	else
		out << " signed";
	return (out);
}
