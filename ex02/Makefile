# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 12:56:22 by lgomez-h          #+#    #+#              #
#    Updated: 2025/03/30 12:56:25 by lgomez-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bank

SRC = Account.cpp test.cpp

HEADERS = Account.hpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

run: all
	./$(NAME) > log

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	rm -f log

re: fclean all

.PHONY: all clean fclean re
