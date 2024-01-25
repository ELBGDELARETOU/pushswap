NAME = push_swap

SRCS = algo.c check_input.c ft_split.c init.c push_swap.c r_command.c s_p_command.c utils.c utils2.c utils3.c

OBJS = ${SRCS:.c=.o}

CC = cc

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME} : ${OBJS}
	${CC} -o ${NAME} ${OBJS} 

.o :.c
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean:
	rm -f ${NAME} ${OBJS}

re: fclean all