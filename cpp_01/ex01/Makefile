# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 18:11:05 by mibernar          #+#    #+#              #
#    Updated: 2023/01/02 18:11:05 by mibernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex01

CC = c++ -g

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -o

HEADERS = Zombie.hpp

FILES = main.cpp Zombie.cpp zombieHorde.cpp

OBJECTS = $(FILES:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) $(NAME) $(HEADERS) $(OBJECTS)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re