/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:20:46 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/09 14:21:38 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
	, _target("target")
{
	std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
	, _target(target)
{
	std::cout << "\e[0;33mConstructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm(copy), _target(copy._target)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if (this != &assign)
		AForm::operator=(assign);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}