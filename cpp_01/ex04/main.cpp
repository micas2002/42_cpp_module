/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:11:08 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/12 14:02:57 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Files.hpp"

int	main(int argc, char **argv)
{
	Files	files = Files(argc, argv);
	std::string	string;

	if (argc != 4)
	{
		std::cout << "invalid number of arguments\n";
		return (0);
	}
	if (files.checkSrc() == 0)
		return (0);
	files.cpySrc();
	files.replaceWords();
	return (0);
}
