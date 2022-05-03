#include <iostream>
#include "Bureaucrat.hpp"

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
	if (grade <= 150 && grade >= 1)
		_grade = grade;
	else if (grade > 150)
		throw std::invalid_argument("GradeTooHighException");
	else
		throw std::invalid_argument("GradeTooLowException");
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
	if (grade <= 150 && grade >= 1)
		_grade = grade;
	else if (grade > 150)
		throw std::invalid_argument("GradeTooHighException");
	else
		throw std::invalid_argument("GradeTooLowException");
}

void	Bureaucrat::upGrade( void )
{
	if (_grade > 1)
		_grade--;
	else
		throw std::invalid_argument("GradeTooLowException");
}

void	Bureaucrat::downGrade( void )
{
	if (_grade < 150)
		_grade++;
	else
		throw std::invalid_argument("GradeTooHighException");
}

std::ostream&	operator << ( std::ostream& out, const Bureaucrat& b )
{
	out << b.getName() << std::string(", bureaucrat grade ") << b.getGrade();
	return (out);
}
