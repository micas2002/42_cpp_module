/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:15:19 by mibernar          #+#    #+#             */
/*   Updated: 2023/02/07 15:38:19 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	this->grade = assign.grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("EXCEPTION: grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("EXCEPTION: grade too low");
}

std::ostream & operator << (std::ostream &out, Bureaucrat const &c)
{
	out << c.getName() << ", bureaucrat grade " << c.getGrade();
	return (out);
}

