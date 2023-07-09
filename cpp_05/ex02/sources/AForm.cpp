/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:06:03 by mibernar          #+#    #+#             */
/*   Updated: 2023/02/08 18:40:24 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& name, int signGrade, int executeGrade) : name(name)
	, signGrade(signGrade), executeGrade(executeGrade), isSigned(false)
{
	std::cout << "\e[0;33mConstructor called of AForm\e[0m" << std::endl;
	if (this->signGrade < 1)
		throw AForm::GradeTooHighException();
	else if (this->signGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy) : signGrade(copy.signGrade), executeGrade(copy.executeGrade)
{
	*this = copy;
}

AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}

AForm & AForm::operator=(const AForm &assign)
{
	this->isSigned = assign.isSigned;
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getIsSigned() const
{
	return (this->isSigned);
}

int	AForm::getSignedGrade() const
{
	return (this->signGrade);
}

int	AForm::getExecuteGrade() const
{
	return (this->executeGrade);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->signGrade)
		this->isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("AFORM EXCEPTION: sign grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("AFORM EXCEPTION: sign grade too low");
}

std::ostream & operator << (std::ostream &out, AForm const &c)
{
    out << "AForm name: " << c.getName() << std::endl
      << "Grade to sign: " << c.getSignedGrade() << std::endl
      << "Grade to execute: " << c.getExecuteGrade();
    return (out);
}