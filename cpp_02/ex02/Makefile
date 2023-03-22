# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 15:02:27 by mibernar          #+#    #+#              #
#    Updated: 2023/01/18 16:14:46 by mibernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CC = c++ -g

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -o

FILES = main.cpp Fixed.cpp

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