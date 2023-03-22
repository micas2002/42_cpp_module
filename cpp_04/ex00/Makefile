# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 17:30:23 by mibernar          #+#    #+#              #
#    Updated: 2023/01/30 13:58:11 by mibernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CC = c++ -g

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -o

FILES = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

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