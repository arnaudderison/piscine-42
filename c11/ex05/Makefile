GCC 		=	gcc
CFLGS 		=	-Wall -Wextra -Werror

INCLUDES 	=	-I./includes

SRCS 		= 	ft_atoi.c \
				ft_calculate.c \
				ft_is_operator.c \
				ft_itoa.c \
				ft_print_result.c \
				ft_putstr.c \
				main.c

OBJS		=	$(addprefix srcs/, ${SRCS:.c=.o})

NAME		=	do-op

%.o:	%.c
	${GCC} ${INCLUDES} ${CFLGS} -c $< -o $@

${NAME}:  ${OBJS}
	${GCC} ${INCLUDES} ${CFLGS} ${OBJS} -o $@

all:		${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
