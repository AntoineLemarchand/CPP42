#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name(std::string("Bureaucrat"))
{
	std::cerr << "Bureaucrat constructor called" << std::endl;
	_grade = 75;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
{
	std::cerr << "Bureaucrat copy constructor called" << std::endl;
	*this = b;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& b)
{
	std::cerr << "Bureaucrat equal constructor called" << std::endl;
	if (this != &b)
	{
		_grade = b.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cerr << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name): _name(name)
{
	std::cerr << "Bureaucrat name constructor called" << std::endl;
	_grade = 75;
}

Bureaucrat::Bureaucrat(int grade)
{
	std::cerr << "Bureaucrat grade constructor called" << std::endl;
	if (grade <= 150 && grade >= 1)
		_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	std::cerr << "Bureaucrat name/grade constructor called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

std::string	Bureaucrat::getName( void ) const
{
	return (_name);
}

int			Bureaucrat::getGrade( void ) const
{
	return (_grade);
}

void	Bureaucrat::setGrade( int grade )
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

void	Bureaucrat::upGrade( void )
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::downGrade( void )
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	bool err = false;
	try
	{
		form.beSigned(*this);
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
		err = true;
	}
	if (!err)
		std::cout << _name << " signed " << form.getName() << std::endl;
}

std::ostream&	operator << ( std::ostream& out, const Bureaucrat& b )
{
	out << b.getName() << std::string(", bureaucrat grade ") << b.getGrade();
	return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade should be above 0");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade should be below 151");
}
