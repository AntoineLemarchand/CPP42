#pragma once
#include <string>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign;
		const int			_exec;
	public:
		Form();
		Form(std::string name, int sign, int exec);
		Form(const Form& form);
		Form& operator = (const Form& form);
		virtual	~Form();

		void	beSigned(const Bureaucrat& bureaucrat);

		virtual void	execute(Bureaucrat const & executor) const = 0;

		std::string		getName() const;
		bool			getSigned() const;
		int				getSign() const;
		int				getExec() const;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class FormNotSigned: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator << ( std::ostream& out, const Form& b );
