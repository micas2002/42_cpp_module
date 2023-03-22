/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Files.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:54:37 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/11 13:46:41 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_H
# define FILES_H

# include <iostream>
# include <fstream>
# include <sstream>


class Files
{
	private:
		std::string	src;
		std::string	dst;
		std::string	s1;
		std::string	s2;
		std::string content;
	public:
		Files(int argc, char **argv);
		~Files();
		int		checkSrc(void);
		void	cpySrc(void);
		void	replaceWords(void);
};

#endif