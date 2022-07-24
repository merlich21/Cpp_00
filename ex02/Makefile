# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merlich <merlich@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 19:10:24 by merlich           #+#    #+#              #
#    Updated: 2022/06/23 19:16:43 by merlich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	account

SRCS		=	Account.cpp tests.cpp

OBJS		=	${SRCS:.cpp=.o}

D_FILES		=	${SRCS:.cpp=.d}

C++			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -MD

RM			=	rm -f

%.o:		%.cpp Makefile
			${C++} ${CPPFLAGS} -c $< -o $@		

${NAME}:	${OBJS} Makefile
			${C++} ${OBJS} -o ${NAME}
			
-include ${D_FILES}

all:		${NAME}

clean:
			${RM} ${OBJS} ${D_FILES}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
