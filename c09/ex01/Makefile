SRCS		= srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_putstr.c srcs/ft_swap.c
OBJS		= ${SRCS:.c=.o}
INCS		= includes
NAME		= libft.a
CREATE_LIB	= ar rc
LIBRARY		= ranlib
GCC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

.c.o: ${GCC} ${CFLAGS} -c $< -o ${<:.c=o} -I ${INCS}

${NAME}: ${OBJS}
		${CREATE_LIB} ${NAME} ${OBJS}
		${LIBRARY} ${NAME}

all: ${NAME}

clean: ${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all
