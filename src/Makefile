# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 15:02:11 by yde-mont          #+#    #+#              #
#    Updated: 2020/11/24 16:50:06 by yde-mont         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		= $(wildcard ft*.c)

OBJ			= ${SRCS:.c=.o}

CFLAGS		= -Wall -Werror -Wextra -c

CC			= gcc ${FLAGS}

AR			= ar -rcs

NAME		= libft.a

all:		${NAME}

${NAME}:	${OBJ}
				${AR} $@ ${OBJ}

clean:
				rm -f ${OBJ}

fclean:		clean
				rm -f ${NAME}

re:			fclean all
