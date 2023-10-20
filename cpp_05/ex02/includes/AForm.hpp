/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:06:13 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/09 13:53:29 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_FORM_HPP
# define A_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_executeGrade;

	public:
		AForm();
		AForm(const std::string name, const int signGrade, const int executeGrade);
		AForm(const AForm &copy);
		virtual ~AForm();

		AForm & operator = (const AForm &assign);
		
		std::string		getName() const;
		virtual bool	getIsSigned() const;
		int				getSignedGrade() const;
		int				getExecuteGrade() const;

		void			beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		
		class GradeTooHighException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public: virtual const char* what() const throw();
		};
};

std::ostream & operator << (std::ostream &out, const AForm &c);

#endif