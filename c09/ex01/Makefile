SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCL = includes/ft.h
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBC = ar rc
LIBI = ranlib
RM = rm -Rf

%.o: %.c
	$(CC) $(FLAGS) -I $(INCL) -c $< -o $@

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBI} ${NAME}

all: ${NAME}

clean:                                                                                                                                                                                                                                                                                                                                                                                                                                                
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re