/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Files.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:58:02 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/13 10:29:34 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Files.hpp"

Files::Files(int argc, char **argv)
{
	std::cout << "\e[0;33mDefault Constructor called of Files\e[0m" << std::endl;
	if (argc != 4)
		return ;
	src = argv[1];
	dst = argv[1];
	dst.insert(src.size() - 4, ".replace");
	s1 = argv[2];
	s2 = argv[3];
}

Files::~Files()
{
	std::cout << "\e[0;33mDefault Destructor called of Files\e[0m" << std::endl;
}

void	Files::replaceWords(void)
{
	std::ofstream	dstFile;
	int 			pos = content.find(s1);
	
	while (pos != std::string::npos)
	{
		content.erase(pos, s1.size());
		content.insert(pos, s2);
		pos = content.find(s1, pos + 1);
	}
	dstFile.open(dst);
	dstFile << content;
	dstFile.close();
}

void	Files::cpySrc(void)
{
	std::ifstream		f(src);
	std::ostringstream	ss;
	
	ss << f.rdbuf();
	content = ss.str();
}

int	Files::checkSrc(void)
{
	std::ifstream	srcfile;
	
	srcfile.open(src);
	if (!srcfile)
	{
		std::cout << "source file doesn't exist\n";
		return (0);
	}
	srcfile.close();
	return (1);
}