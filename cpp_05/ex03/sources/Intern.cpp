/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:33:42 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/26 15:49:59 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
	*this = copy;
}

Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}

Intern & Intern::operator=(const Intern &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of Intern\e[0m" << std::endl;
	if (this != &assign)
		(void)assign;
	return (*this);
}

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	std::string	formsTypes[3] = {"robotomy request", "presidential pardon"
		, "shrubbery creation"};
	AForm*	form;
	int		i = 0;

	while (i < 3)
	{
		if (formsTypes[i] == formName)
		{
			switch (i)
			{
				case 0:
					form = new RobotomyRequestForm(target);
					break ;
				case 1:
					form = new PresidentialPardonForm(target);
					break ;
				case 2:
					form = new ShrubberyCreationForm(target);
					break ;
			}
			std::cout << "Intern creates " << formName << std::endl;
			return (form);
		}
		i++;
	}
	std::cout << "given form name not found!\n";
	return(NULL);
}