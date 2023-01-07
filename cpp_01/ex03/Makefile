# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 12:26:18 by mkoyamba          #+#    #+#              #
#    Updated: 2023/01/07 12:26:47 by mkoyamba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fight

INC_DIR =	.

SRC =	main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\

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