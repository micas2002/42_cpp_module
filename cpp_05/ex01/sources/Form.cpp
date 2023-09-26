/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:31:45 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/26 13:58:13 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Form"), _isSigned(false), _signGrade(150)
	, _executeGrade(150)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(std::string name, const int signGrade, const int executeGrade) : _name(name)
	, _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	std::cout << "\e[0;33mConstructor called of Form\e[0m" << std::endl;
	if (this->_signGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_signGrade > 150)
		throw Form::GradeTooLowException();
	if (this->_executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
	*this = copy;
}

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

Form & Form::operator=(const Form &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of Bureaucrat\e[0m" << std::endl;
	this->_isSigned = assign._isSigned;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getIsSigned() const
{
	return (this->_isSigned);
}

int	Form::getSignedGrade() const
{
	return (this->_signGrade);
}

int	Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_signGrade)
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("FORM EXCEPTION: grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("FORM EXCEPTION: grade too low");
}

std::ostream & operator << (std::ostream &out, Form const &c)
{
    out << "Form name: " << c.getName() << std::endl
      << "Grade to sign: " << c.getSignedGrade() << std::endl
      << "Grade to execute: " << c.getExecuteGrade();
    return (out);
}