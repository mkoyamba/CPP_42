# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 12:34:17 by mkoyamba          #+#    #+#              #
#    Updated: 2023/05/26 10:58:15 by mkoyamba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = MutantStack

INC_DIR =	.

SRC =	main.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPP_FLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp
	@$(CC) $(CPP_FLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re