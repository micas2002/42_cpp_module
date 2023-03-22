# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 15:21:00 by mibernar          #+#    #+#              #
#    Updated: 2023/01/05 13:08:14 by mibernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CC = c++ -g

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -o

#HEADERS = Account.hpp

FILES = Account.cpp tests.cpp

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