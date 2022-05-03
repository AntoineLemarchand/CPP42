Form::Form(): _name("Form"), _signGrade(1), _execGrade(150)
{
	_signed = false;
	std::cerr << "Form constructed" << std::endl;
}

Form::Form(std::string name, int sign, int exec): _name(name), _signGrade(sign), _execGrade(exec)
{
	_signed = false;
	std::cerr << "Form constructed" << std::endl;
}

Form::Form(const Form& form): _name(form.getName()), _signGrade(form.getSignGrade()), _execGrade(form.getExecGrade())
{
	*this = form;
	std::cerr << "Form copy constructed" << std::endl;
}

Form& Form::operator = (const Form& form)
{
	_signed = form.getSigned;
	std::cerr << "name and grades are const and are not to be overwritten" << std::endl;
	std::cerr << "Form equal constructed" << std::endl;
}

Form::~Form()
{
	std::cerr << "Form destroyed" << std::endl;
}

std::string	Form::getName( void ) const
{
	return (_name);
}

bool		Form::getSigned( void ) const
{
	return (_signed);
}

int			Form::getSignGrade( void ) const
{
	return (_signGrade);
}

int			Form::getExecGrade( void ) const
{
	return (_execGrade);
}

std::ostream& operator << (std::ostream& out, const Form& form)
{
	out << "form " << _name;
	if (_signed)
		out << ": signed by " << _signGrade;
	out << ", executable by " << _execGrade << std::endl;
	return (out);
}
