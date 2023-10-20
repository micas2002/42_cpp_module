/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:42:59 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/09 14:21:01 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		PresidentialPardonForm & operator = (const PresidentialPardonForm &assign);
		
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif