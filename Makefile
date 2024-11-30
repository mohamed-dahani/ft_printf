SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c convert_hexa.c

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
all: ${NAME}


clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 

re: fclean all

.SECONDARY: ${OBJS}

.PHONY: all clean fclean re