# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshereme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 17:12:36 by mshereme          #+#    #+#              #
#    Updated: 2023/11/15 09:43:03 by mshereme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
       ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
       ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c\
       ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
       ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
       ft_putendl_fd.c ft_putnbr_fd.c

SRCS_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
	 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
	 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

HEAD = libft.h

OBJS = ${SRCS:.c=.o}

OBJS_B = ${SRCS_B:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar -rc

LIB = ranlib

all :	${NAME}

.c.o :
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME}

bonus: ${OBJS} ${OBJS_B}
	${AR} ${NAME} ${OBJS} ${OBJS_B}
	${LIB} ${NAME}
clean : 
	${RM} ${OBJS} ${OBJS_B}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all bonus clean fclean re
