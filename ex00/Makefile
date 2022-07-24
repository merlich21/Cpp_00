# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merlich <merlich@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 20:51:17 by merlich           #+#    #+#              #
#    Updated: 2022/06/15 21:54:52 by merlich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	megaphone.cpp

OBJS		=	${SRCS:.cpp=.o}

C++			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

%.o:		%.cpp Makefile
			${C++} ${CPPFLAGS} -c $< -o $@

${NAME}:	${OBJS} Makefile
			${C++} ${OBJS} -o ${NAME}
			
all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
