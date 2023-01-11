# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 17:48:39 by mkoyamba          #+#    #+#              #
#    Updated: 2023/01/11 14:11:57 by mkoyamba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

INC_DIR =	.

SRC =	main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\

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