/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:07:38 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/26 14:44:47 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string	const	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		Bureaucrat & operator = (const Bureaucrat &assign);
		
		std::string	getName() const;
		int			getGrade() const;

		void		incrementGrade();
		void		decrementGrade();
		void		signForm(AForm& form);
		void		executeForm(AForm const & form);
		
		class GradeTooHighException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public: virtual const char* what() const throw();
		};

};

std::ostream & operator << (std::ostream &out, const Bureaucrat &c);

#endif