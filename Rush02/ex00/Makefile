
SRS		= main.c functions.c logic.c modules.c

OBJS	= ${SRS:.c=.o}

NAME	= rush-02

CC		= cc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm ${OBJS}

fclean:		clean
			rm ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
