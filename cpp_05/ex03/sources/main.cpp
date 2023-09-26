/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:06:28 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/26 15:55:31 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	{
		Intern  someRandomIntern;
		AForm*   rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	
	{
		Intern  someRandomIntern;
		AForm*   rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
	}
	
	{
		Intern  someRandomIntern;
		AForm*   rrf;

		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
	}
	
	{
		Intern  someRandomIntern;
		AForm*   rrf;

		rrf = someRandomIntern.makeForm("robotomy", "Bender");
		rrf = someRandomIntern.makeForm("plane request", "Bender");
		delete rrf;
	}

	/*try
	{
		Bureaucrat				bureaucrat("ash", 1);
		ShrubberyCreationForm	form1("Shrubbery");
		RobotomyRequestForm		form2("Robotomy");
		PresidentialPardonForm	form3("President");

		std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
		std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat				bureaucrat("ash", 149);
		ShrubberyCreationForm	form1("Shrubbery");
		RobotomyRequestForm		form2("Robotomy");
		PresidentialPardonForm	form3("President");

		std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
		std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat				bureaucrat("ash", 45);
		ShrubberyCreationForm	form1("Shrubbery");
		RobotomyRequestForm		form2("Robotomy");
		PresidentialPardonForm	form3("President");

		std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
		std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat				bureaucrat("ash", 0);
		ShrubberyCreationForm	form1("Shrubbery");
		RobotomyRequestForm		form2("Robotomy");
		PresidentialPardonForm	form3("President");

		std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
		std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat				bureaucrat("ash", 151);
		ShrubberyCreationForm	form1("Shrubbery");
		RobotomyRequestForm		form2("Robotomy");
		PresidentialPardonForm	form3("President");

		std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
		std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}*/
	return (0);
}