#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrub", 145, 137)
{
	std::cerr << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrub", 145, 137), _target(target)
{
	std::cerr << "ShrubberyCreationForm target created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& S ): Form(S.getName(), S.getSign(), S.getExec()), _target(S.getTarget())
{
	std::cerr << "ShrubberyCreationForm copy created" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = ( const ShrubberyCreationForm& S )
{
	*this = ShrubberyCreationForm(S);
	std::cerr << "ShrubberyCreationForm equal created" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cerr << "ShrubberyCreationForm destroyed" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= Form::getExec() && Form::getSigned())
	{
		std::string file = _target + "_shrubbery";
		std::ofstream outfile;

		outfile.open(file.c_str());
		if (!outfile.is_open())
		{
			std::cout << "cannot open " << file << std::endl;
			return ;
		}
		outfile << "                  OOO,OOOOOOO\n                   ,'OO \\\\-*OOOOOOO\n             ;OOOOO*O   _OOOO\"\n              ,OOO       \(_.*OOOO.\n              O *OO, ,OOOO*(    '\n            0^     ,*OOO )\\|,OO*O,_\n                 *O    \\/ #).-\"*OO*\n                     _.| ,/ *O,\n             _________/|#(_____________";
		outfile.close();
	}
	else if (!Form::getSigned())
		throw Form::FormNotSigned();
	else
		throw Form::GradeTooLowException();
}
