/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:21:02 by mibernar          #+#    #+#             */
/*   Updated: 2023/02/08 18:38:41 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
	,target(target)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm("ShrubberyCreationForm", 145, 137)
	,target(target)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static int	i = 0;

	if (executor.getGrade() > this->getExecuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		if (i % 2 == 0)
		{
			std::cout << "*LOUD DRILLING NOISES*\n" << executor.getName()
				<< " has been robotomized successfully.\n";
		}
		else
			std::cout << "robotomy has failed failed\n";
		i++;
	}
}