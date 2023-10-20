/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:21:16 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/09 14:26:17 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
	, _target("target")
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
	,_target(target)
{
	std::cout << "\e[0;33mConstructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
	, _target(copy._target)
{
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of ShrubberyCreationForm\e[0m"
		<< std::endl;
	if (this != &assign)
		AForm::operator=(assign);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream file((this->_target + "_shrubbery").c_str());

	if (executor.getGrade() > this->getExecuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		file <<	"		            .        +          .      ." << std::endl;
		file <<	"     .            _        .                    ." << std::endl;
		file <<	"  ,              /;-._,-.____        ,-----.__" << std::endl;
		file <<	" ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
		file <<	"  `                 /   _|`'=:_::.`.);  / __/ /" << std::endl;
		file <<	"                      ,    `./  /:. `.   )==-'  ." << std::endl;
		file <<	"    .      ., ,-=-.  ,/, +#./`   /:.  / /           ." << std::endl;
		file <<	".           //:/`-' , ,/ '` ` `   ): , /_  -o" << std::endl;
		file <<	"       .    /:+- - + +- : :- + + -:'  /(o-) /)     ." << std::endl;
		file <<	"  .      ,=':  /    ` `/` ' , , ,:' `'--'.--'---._/`7" << std::endl;
		file <<	"   `.   (    /: /,-._` ` + '/, ,'   _,--._,---'':.__/" << std::endl;
		file <<	"              /:  `  X` _| _,//'   .-''" << std::endl;
		file <<	".               '':._:`/____  /:'  /      .           ." << std::endl;
		file <<	"                    /::.  ://:'  /              +" << std::endl;
		file <<	"   .                 `.:.  /:'  }      ." << std::endl;
		file <<	"           .           ):_(:;   /           ." << std::endl;
		file <<	"                      /:. _/ ,  |" << std::endl;
		file <<	"                   . (|::.     ,`                  ." << std::endl;
		file <<	"     .                |::.    {." << std::endl;
		file <<	"                      |::./  / `." << std::endl;
		file <<	"                      |:::(/    |" << std::endl;
		file <<	"              O       |:::/{ }  |                  (o" << std::endl;
		file <<	"               )  ___/#/::`/ (O ==._____   O, (O  /`" << std::endl;
		file <<	"          ~~~w/w~'~~,/` `:/,-(~`'~~~~~~~~'~o~/~/~w|/~" << std::endl;
		file <<	"   ~~~~~~~~~~~~~~~~~~~~~~~//W~~~~~~~~~~~~/|/~~" << std::endl;
	}
}