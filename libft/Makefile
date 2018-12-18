# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/19 00:12:27 by hfalmer           #+#    #+#              #
#    Updated: 2018/12/19 00:54:24 by hfalmer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLG = -Wall -Wextra -Werror
INC = libft.h
SRC = 	ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		#ft_memmove.c\#
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strncat.c\
		#ft_strlcat.c\#
		#ft_strchr.c\#
		#ft_strrchr.c\#
		ft_strstr.c\
		#ft_strnstr.c\#
		ft_strcmp.c\
		ft_strncmp. \
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c
INC = -I ./
OUT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		gcc $(FLG) $(INC) -c $(SRC)
		ar rc $(NAME) $(OUT)
		ranlib $(NAME)

clean:
		rm -rf $(OUT)

fclean:	clean
		rm -rf $(NAME)

re: fclean all
