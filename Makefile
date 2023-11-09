SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcat.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			 ft_atoi.c

OBJS = ${SRCS:.c=.o}

INCS = includes

NAME = libft.a

LIBC = ar rc

LIBR = ranlib

CC			= gcc

RM			= rm -f

CFLAGS = -Wall -Wextra -Werror -I.

%.o: %.c
		${CC} ${CFLAGS} -c -I ${INCS} $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}
		${LIBR} ${NAME}

all: ${NAME}

clean:
		${RM} ${OBJS}
fclean : clean
		${RM} ${NAME}

re: fclean all