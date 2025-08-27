# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/24 00:39:33 by tamamart          #+#    #+#              #
#    Updated: 2025/08/24 00:48:53 by tamamart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for libft
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source and object files
SRC = $(wildcard *.c) # Automatically include all .c files in the directory with wildcard
#SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c

OBJ = $(SRC:.c=.o)

# Rules
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ): libft.h

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

.PHONY: all clean fclean re
												