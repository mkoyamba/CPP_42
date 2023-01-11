# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 12:57:40 by mkoyamba          #+#    #+#              #
#    Updated: 2023/01/11 14:13:35 by mkoyamba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ClapTrap

INC_DIR =	.

SRC =	main.cpp\
		ClapTrap.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPP_FLAGS) $(OBJ) -o $(NAME)
	
%.o: %.c
	@$(CC) $(CPP_FLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, bonus, re