# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 15:05:56 by mibernar          #+#    #+#              #
#    Updated: 2023/02/07 17:01:31 by mibernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CC = c++ -g

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -o

FILES = main.cpp Bureaucrat.cpp Form.cpp

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