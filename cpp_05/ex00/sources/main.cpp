/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:06:28 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/26 11:56:06 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	
	Bureaucrat kevin = Bureaucrat();
	try
	{
		std::cout << "1: " << kevin << std::endl;
		kevin.incrementGrade();
		std::cout << "2: " << kevin << std::endl;
		kevin.decrementGrade();
		std::cout << "3: " << kevin << std::endl;
		kevin.decrementGrade();
		std::cout << "4: " << kevin << std::endl;
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;	
	
	Bureaucrat john = Bureaucrat("John", 1);
	try
	{
		std::cout << "1: " << john << std::endl;
		john.incrementGrade();
		std::cout << "2: " << john << std::endl;
		john.incrementGrade();
		std::cout << "3: " << john << std::endl;
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

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
	delete ben;
	std::cout << std::endl;

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
	delete jim;
	std::cout << std::endl;

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
	delete michael;
	std::cout << std::endl;

	try
	{
		Bureaucrat *clair = new Bureaucrat("Clair", 0);
		clair->decrementGrade();
		std::cout << "Clair says hi!\n";	
		delete clair;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat *boris = new Bureaucrat("Clair", 151);
		boris->decrementGrade();
		std::cout << "Boris says hi!\n";	
		delete boris;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}