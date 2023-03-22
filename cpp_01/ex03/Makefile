# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 11:51:56 by mibernar          #+#    #+#              #
#    Updated: 2023/01/10 14:09:13 by mibernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

CC = c++ -g

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -o

FILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJECTS = $(FILES:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) $(NAME) $(OBJECTS)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re