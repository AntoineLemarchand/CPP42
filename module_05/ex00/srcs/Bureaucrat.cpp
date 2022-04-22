#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "bureaucrat";
	_grade = 75;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
{
	*this = b;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& b)
{
	if (this != &b)
	{
		_grade = b.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name)
{
	_name = name;
}

Bureaucrat::Bureaucrat(int grade)
{
	if (grade <= 150 && grade >= 1)
		_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	_name = name;
	if (grade <= 150 && grade >= 1)
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
	if (grade <= 150 && grade >= 1)
		_grade = grade;
}

void	Bureaucrat::upGrade( void )
{
	if (grade > 1)
		_grade--;
}

void	Bureaucrat::downGrad( void )
{
	if (grade < 150)
		_grade++;
}

std::ostream&	operator << ( std::ostream& out, const Bureaucrat& b )
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}
