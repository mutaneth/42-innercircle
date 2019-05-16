# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/19 00:12:27 by hfalmer           #+#    #+#              #
#    Updated: 2019/05/02 18:55:50 by hfalmer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLG = -Wall -Wextra -Werror
SRC = 	ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strstr.c\
		ft_strcmp.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_memmove.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strlcat.c\
		ft_strncat.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_strmap.c\
		ft_strequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putendl.c\
		ft_putnbr.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_strncmp.c\
		ft_isspace.c\
		ft_lstdel.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstnew.c\
		ft_itoa.c\
		ft_memswap.c\
		ft_striteri.c\
		ft_strmapi.c\
		ft_strnequ.c\
		ft_lstmap.c\
		ft_strsplit.c\
		ft_lstadd.c\
		ft_free.c\
		ft_lstinew.c\
		ft_lstimap.c\
		ft_lstidel.c\
		ft_lstidelone.c\
		ft_lstiiter.c\
		ft_lstiadd.c\
		ft_strchri.c\
		ft_strrejoin.c\
		ft_lstcnt.c\
		ft_lsticnt.c

INC = -I ./
OUT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		gcc -g $(FLG) $(INC) -c $(SRC)
		ar rc $(NAME) $(OUT)
		ranlib $(NAME)

clean:
		rm -rf $(OUT)

fclean:	clean
		rm -rf $(NAME)

re: fclean all
