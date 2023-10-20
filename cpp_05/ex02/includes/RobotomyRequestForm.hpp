/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:43:09 by mibernar          #+#    #+#             */
/*   Updated: 2023/02/08 16:16:00 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator = (const RobotomyRequestForm &assign);

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif