# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    readme                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfalmer <hfalmer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 18:21:46 by hfalmer           #+#    #+#              #
#    Updated: 2019/05/17 02:55:05 by hfalmer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DON'T FORGET TO PUT ALL SHIT IN THE MAKEFILE TY

||| FUNC

there are some functions for indexed lists))
	tbh all t_lists' functions are t_lsti now)

strdup == memcpy

ft_strchri shows index of chat int the str

ft_strrejoin == ft_strjoinfree joins n frees fkn strings.
	if flg < 0 then frees left str
	if flg == 0 then frees all str
	if flg > 0 then frees rght str


||| VAR

tmpS is for temp strings

tmpL -- for temp lists


||| TODO

header:
void                ft_lstfree(t_list **tmp);//govno
void                ft_lstifree(t_lsti **tmp);//jopa


||| Default LIBFT

memset: void *(void *s, int c, size_t n)
	заполняет первые n байтов той области памяти, на которую указывает s, постоянным байтом c.
	возвращает указатель на область памяти s.

bzero: void(void * s , size_t  n)
	устанавливает первые n байтов области, начинающейся с s в нули (пустые байты).

memcpy: void *(void *dest, const void *src, size_t n)
	копирует n байтов из области памяти src в область памяти dest. Области памяти не могут пересекаться.
	возвращает указатель на dest.

memmove: void *(void *dest, const void *src, size_t n)
	копирует n байтов из области памяти src в облать памяти dest. Области памяти могут перекрываться.
	возвращает указатель на dest.

memchr: void *(const void *s, int c, size_t n)
	ищет символ c в первых n байтах той области памяти, на которую указывает s. Совпадение первого байта с
	c (представленным как беззнаковый символ) останавливает выполнение операции.
	возвращают указатель на совпадающий байт или NULL, если символ не найден в данной области памяти.

memcmp: int (const void *s1, const void *s2, size_t n)
	сравнивает первые n байтов областей памяти s1 и s2. Возвращается целое число, меньшее, большее нуля или
	равное ему, если определено, что s1 меньше, больше, чем s2, или равно ему.
	возвращает целое, меньшее, большее нуля или равное ему, если определено, что первые n байтов s1 меньше,
	больше, чем первые n байтов s2, или равны им.

strlen: size_t (const char *s)
	вычисляет длину строки s. Завершающий символ `\0'не учитывается.
	возвращает количество символов в строке s.
	

	
	