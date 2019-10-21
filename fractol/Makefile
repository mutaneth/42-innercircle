# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 14:26:49 by hfalmer           #+#    #+#              #
#    Updated: 2019/10/20 15:46:15 by hfalmer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := fractol
FLAGS := -Wall -Wextra -Werror -O3
MLX := -L./minilibx_macos -lmlx -framework OpenGL -framework AppKit
SRCS :=  src/main.c 
LIB := -L./libft -lft -lm
INCL := -I includes/ -I libft/includes/
CC := gcc
OBJ := $(SRCS:.c=.o)

all: lib $(OBJ) $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@ $(INCL)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(LIB) $(OBJ) $(MLX)

lib:
	@make -C libft/

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ clean
	@make -C libft/ fclean

re: fclean all
