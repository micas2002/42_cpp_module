/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:21:16 by mibernar          #+#    #+#             */
/*   Updated: 2023/02/08 18:37:08 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
	,target(target)
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): AForm("ShrubberyCreationForm", 145, 137)
	,target(target)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream file(executor.getName() + "_shrubbery");

	if (executor.getGrade() > this->getExecuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else
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