/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:21:02 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/09 14:26:01 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
	, _target("target")
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
	, _target(target)
{
	std::cout << "\e[0;33mConstructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy)
	, _target(copy._target)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if (this != &assign)
		AForm::operator=(assign);
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
			std::cout << "*LOUD DRILLING NOISES*" <<  std::endl << this->_target
				<< " has been robotomized successfully." << std::endl;
		}
		else
			std::cout << "robotomy has failed failed" << std::endl;
		i++;
	}
}