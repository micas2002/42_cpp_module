/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:06:03 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/26 14:58:38 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default Form"), _isSigned(false), _signGrade(150)
	, _executeGrade(150)
{
	std::cout << "\e[0;33mDefault Constructor called of AForm\e[0m" << std::endl;
}

AForm::AForm(std::string name, const int signGrade, const int executeGrade) : _name(name)
	, _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	std::cout << "\e[0;33mConstructor called of AForm\e[0m" << std::endl;
	if (this->_signGrade < 1)
		throw AForm::GradeTooHighException();
	else if (this->_signGrade > 150)
		throw AForm::GradeTooLowException();
	if (this->_executeGrade < 1)
		throw AForm::GradeTooHighException();
	else if (this->_executeGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy) : _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
	std::cout << "\e[0;33mCopy Constructor called of AForm\e[0m" << std::endl;
	*this = copy;
}

AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}

AForm & AForm::operator=(const AForm &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of Bureaucrat\e[0m" << std::endl;
	this->_isSigned = assign._isSigned;
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int	AForm::getSignedGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExecuteGrade() const
{
	return (this->_executeGrade);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_signGrade)
		this->_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("FORM EXCEPTION: grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("FORM EXCEPTION: grade too low");
}

std::ostream & operator << (std::ostream &out, AForm const &c)
{
    out << "Form name: " << c.getName() << std::endl
      << "Grade to sign: " << c.getSignedGrade() << std::endl
      << "Grade to execute: " << c.getExecuteGrade();
    return (out);
}