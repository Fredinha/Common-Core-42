# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 15:57:53 by fgomes-f          #+#    #+#              #
#    Updated: 2023/05/19 12:55:24 by fgomes-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c function_c.c function_s.c function_d_i.c function_u.c function_x.c function_bigx.c function_p.c

OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .

.o:.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		make -C libft
		cp libft/libft.a .
		mv libft.a ${NAME}
		ar rcs ${NAME} ${OBJS}

all : ${NAME}

clean:
		make -C libft clean
		${RM} ${OBJS}

fclean: clean
		make -C libft fclean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
