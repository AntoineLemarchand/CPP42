#pragma once
#include <string>


class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& b);
		Bureaucrat& operator = (const Bureaucrat& b);
		~Bureaucrat();

		Bureaucrat(std::string name);
		Bureaucrat(int grade);
		Bureaucrat(std::string name, int grade);

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		void	setName( const std::string name );
		void	setGrade( int grade );

		void	upGrade( void );
		void	downGrade( void );
};

std::ostream&	operator << ( std::ostream& out, const Bureaucrat& b );
