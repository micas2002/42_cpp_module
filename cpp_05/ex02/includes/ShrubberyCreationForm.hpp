/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:43:12 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/09 14:23:15 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &assign);

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif