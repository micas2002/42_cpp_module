# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 15:21:00 by mibernar          #+#    #+#              #
#    Updated: 2023/01/02 11:11:35 by mibernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Contacs

CC = c++ -g

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -o

HEADERS = PhoneBook.hpp Contact.hpp

FILES = main.cpp PhoneBook.cpp Contact.cpp

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