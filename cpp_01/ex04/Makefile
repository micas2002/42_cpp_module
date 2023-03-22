# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 16:10:31 by mibernar          #+#    #+#              #
#    Updated: 2023/01/10 17:09:55 by mibernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04

CC = c++ -g

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -o

FILES = main.cpp Files.cpp

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