# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 11:21:14 by mkoyamba          #+#    #+#              #
#    Updated: 2022/10/30 11:22:10 by mkoyamba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = BankNote

INC_DIR =	.

SRC =	Account.cpp \
		tests.cpp \

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

.PHONY: all, clean, fclean, re