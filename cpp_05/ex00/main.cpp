/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:06:28 by mibernar          #+#    #+#             */
/*   Updated: 2023/02/06 18:12:50 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat *john = new Bureaucrat("John", 1);
	try
	{
		std::cout << "1: " << *john << std::endl;
		john->incrementGrade();
		std::cout << "2: " << *john << std::endl;
		john->incrementGrade();
		std::cout << "3: " << *john << std::endl;
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	delete john;

	Bureaucrat *ben = new Bureaucrat("Ben", 1);
	try
	{
		std::cout << "1: " << *ben << std::endl;
		ben->decrementGrade();
		std::cout << "2: " << *ben << std::endl;
		ben->decrementGrade();
		std::cout << "3: " << *ben << std::endl;
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	delete ben;

	Bureaucrat *jim = new Bureaucrat("Jim", 150);
	try
	{
		std::cout << "1: " << *jim << std::endl;
		jim->incrementGrade();
		std::cout << "2: " << *jim << std::endl;
		jim->incrementGrade();
		std::cout << "3: " << *jim << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	delete jim;

	Bureaucrat *michael = new Bureaucrat("Michael", 150);
	try
	{
		std::cout << "1: " << *michael << std::endl;
		michael->decrementGrade();
		std::cout << "2: " << *michael << std::endl;
		michael->decrementGrade();
		std::cout << "3: " << *michael << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	delete michael;

	try
	{
		Bureaucrat *clair = new Bureaucrat("Clair", -1);
		std::cout << "Clair says hi!\n";	
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}