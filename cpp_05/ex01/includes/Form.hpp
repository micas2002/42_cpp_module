/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:23:16 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/26 13:11:20 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_executeGrade;

	public:
		Form();
		Form(std::string name, const int signGrade, const int executeGrade);
		Form(const Form &copy);
		~Form();

		Form & operator = (const Form &assign);
		
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSignedGrade() const;
		int			getExecuteGrade() const;

		void		beSigned(const Bureaucrat& bureaucrat);		
		
		class GradeTooHighException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public: virtual const char* what() const throw();
		};
};

std::ostream & operator << (std::ostream &out, const Form &c);

#endif