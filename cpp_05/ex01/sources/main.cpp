/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:06:28 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/09 13:32:33 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bureaucrat("Dave", 1);
		Form form("Taxes", 150, 150);

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
		Bureaucrat bureaucrat("Clive", 150);
		Form form("Taxes", 150, 150);

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
		Bureaucrat bureaucrat("Dave", 0);
		Form form("Taxes", 150, 150);

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
		Bureaucrat bureaucrat("Clive", 151);
		Form form("Taxes", 150, 150);

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
		Bureaucrat bureaucrat("John", 1);
		Form form("Taxes", 1, 1);

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
		Form form("Taxes", 0, 1);

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
		Form form("Taxes", 151, 1);

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
		Form form("Taxes", 150, 0);

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
		Form form("Taxes", 150, 151);

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