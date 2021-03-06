cmake_minimum_required(VERSION 3.14)
project(ft_ls)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)
include_directories(lib/libft/inc)

add_executable(ft_ls
        inc/ft_ls.h
        lib/libft/inc/libft.h
        lib/libft/src/ft_atoi.c
        lib/libft/src/ft_bzero.c
        lib/libft/src/ft_free.c
        lib/libft/src/ft_isalnum.c
        lib/libft/src/ft_isalpha.c
        lib/libft/src/ft_isascii.c
        lib/libft/src/ft_isdigit.c
        lib/libft/src/ft_islower.c
        lib/libft/src/ft_isprint.c
        lib/libft/src/ft_isspace.c
        lib/libft/src/ft_isstn.c
        lib/libft/src/ft_isupper.c
        lib/libft/src/ft_itoa.c
        lib/libft/src/ft_lstadd.c
        lib/libft/src/ft_lstadd_back.c
        lib/libft/src/ft_lstcnt.c
        lib/libft/src/ft_lstdel.c
        lib/libft/src/ft_lstdelone.c
        lib/libft/src/ft_lstdelones.c
        lib/libft/src/ft_lstdels.c
        lib/libft/src/ft_lstfree.c
        lib/libft/src/ft_lstiadd.c
        lib/libft/src/ft_lsticnt.c
        lib/libft/src/ft_lstidelone.c
        lib/libft/src/ft_lstiiter.c
        lib/libft/src/ft_lstinew.c
        lib/libft/src/ft_lstiter.c
        lib/libft/src/ft_lstmap.c
        lib/libft/src/ft_lstnew.c
        lib/libft/src/ft_memalloc.c
        lib/libft/src/ft_memccpy.c
        lib/libft/src/ft_memchr.c
        lib/libft/src/ft_memcmp.c
        lib/libft/src/ft_memcpy.c
        lib/libft/src/ft_memdel.c
        lib/libft/src/ft_memmove.c
        lib/libft/src/ft_memset.c
        lib/libft/src/ft_memswap.c
        lib/libft/src/ft_nbrlen.c
        lib/libft/src/ft_putchar.c
        lib/libft/src/ft_putchar_fd.c
        lib/libft/src/ft_putendl.c
        lib/libft/src/ft_putendl_fd.c
        lib/libft/src/ft_putnbr.c
        lib/libft/src/ft_putnbr_fd.c
        lib/libft/src/ft_putstr.c
        lib/libft/src/ft_putstr_fd.c
        lib/libft/src/ft_putwchar.c
        lib/libft/src/ft_putwchar_fd.c
        lib/libft/src/ft_strallcpy.c
        lib/libft/src/ft_strcat.c
        lib/libft/src/ft_strchr.c
        lib/libft/src/ft_strchri.c
        lib/libft/src/ft_strclr.c
        lib/libft/src/ft_strcmp.c
        lib/libft/src/ft_strcpy.c
        lib/libft/src/ft_strdel.c
        lib/libft/src/ft_strdup.c
        lib/libft/src/ft_strequ.c
        lib/libft/src/ft_striter.c
        lib/libft/src/ft_striteri.c
        lib/libft/src/ft_strjoin.c
        lib/libft/src/ft_strlcat.c
        lib/libft/src/ft_strlen.c
        lib/libft/src/ft_strmap.c
        lib/libft/src/ft_strmapi.c
        lib/libft/src/ft_strncat.c
        lib/libft/src/ft_strncmp.c
        lib/libft/src/ft_strncpy.c
        lib/libft/src/ft_strnequ.c
        lib/libft/src/ft_strnew.c
        lib/libft/src/ft_strnstr.c
        lib/libft/src/ft_strrchr.c
        lib/libft/src/ft_strrejoin.c
        lib/libft/src/ft_strsfree.c
        lib/libft/src/ft_strsplit.c
        lib/libft/src/ft_strstr.c
        lib/libft/src/ft_strsub.c
        lib/libft/src/ft_strtrim.c
        lib/libft/src/ft_tolower.c
        lib/libft/src/ft_toupper.c
        lib/libft/src/ft_wordlen.c
        lib/libft/src/ft_wordscnt.c
        lib/libft/src/get_next_line.c
        src/check_file.c
        src/colors.c
        src/data.c
        src/fill_tbl.c
        src/free_all.c
        src/ft_ls.c
        src/ft_lstinsert.c
        src/group_name.c
        src/init_finf.c
        src/links_count.c
        src/lst_insert_new.c
        src/main.c
        src/name.c
        src/owner_name.c
        src/permission.c
        src/print.c
        src/size.c
        src/type.c
        src/utils.c
        author
        Makefile)
