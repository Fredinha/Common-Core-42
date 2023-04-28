NAME = libft.a
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_atoi.c ft_bzero.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strchr.c ft_strdup.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c
OBJS = ${SRC:.c=.o}
INCLUDE = -I .
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

tclean: clean
		${RM} teste

re: fclean all

teste:
		${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean re
