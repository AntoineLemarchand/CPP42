#pragma once

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	public:
		Form();
		Form(std::string name, int sign, int exec);

		Form(const Form& form);
		Form& operator = (const Form& form);
		~Form();

		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		int			getSignGrade( void ) const;
		int			getExecGrade( void ) const;

		void		signForm( void );

};

std::ostream& operator << (std::ostream& out, const Form& form);
