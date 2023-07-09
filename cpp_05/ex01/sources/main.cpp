/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:06:28 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/09 17:10:31 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bureaucrat("Dave", 10);
		Form form("Taxes", 10);

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		Bureaucrat bureaucrat("Peter", 1);
		Form form("Taxes", 10);

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		Bureaucrat bureaucrat("Michael", 50);
		Form form("Taxes", 10);

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		Bureaucrat bureaucrat("Evan", 10);
		Form form("Taxes", 0);

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		Bureaucrat bureaucrat("Megan", 10);
		Form form("Taxes", 151);

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat bureaucrat("John", 151);
		Form form("Taxes", 10);

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		Bureaucrat bureaucrat("Claire", 0);
		Form form("Taxes", 10);

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}