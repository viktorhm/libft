SRCS = ${wildcard *.c}

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs  ${NAME} ${OBJS}

.o.c:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

