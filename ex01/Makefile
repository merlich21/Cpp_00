# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merlich <merlich@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 20:51:17 by merlich           #+#    #+#              #
#    Updated: 2022/06/23 19:05:26 by merlich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

SRCS		=	main.cpp Contact.class.1.cpp Contact.class.2.cpp \
				PhoneBook.class.1.cpp PhoneBook.class.2.cpp

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
