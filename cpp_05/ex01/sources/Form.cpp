/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:31:45 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/09 17:12:22 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, const int signGrade) : name(name)
	, signGrade(signGrade), executeGrade(0), isSigned(false)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
	if (this->signGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : signGrade(copy.signGrade), executeGrade(copy.executeGrade)
{
	*this = copy;
}

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

Form & Form::operator=(const Form &assign)
{
	this->isSigned = assign.isSigned;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getIsSigned() const
{
	return (this->isSigned);
}

int	Form::getSignedGrade() const
{
	return (this->signGrade);
}

int	Form::getExecuteGrade() const
{
	return (this->executeGrade);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->signGrade)
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("FORM EXCEPTION: sign grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("FORM EXCEPTION: sign grade too low");
}

std::ostream & operator << (std::ostream &out, Form const &c)
{
    out << "Form name: " << c.getName() << std::endl
      << "Grade to sign: " << c.getSignedGrade() << std::endl
      << "Grade to execute: " << c.getExecuteGrade();
    return (out);
}