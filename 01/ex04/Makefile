# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 19:34:37 by jcourtoi          #+#    #+#              #
#    Updated: 2022/11/21 12:33:48 by jcourtoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed

SRCS = main.cpp

CC =	c++

_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_END=	$'\033[0m

HEADERS = Sed.hpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -rf

all: ${NAME}

.cpp.o:
		$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

${NAME}: ${OBJS} ${HEADERS}
	@echo "$(_GREEN)Executable created : ${NAME}$(_END)"
	${CC} ${FLAGS}  -o $(NAME) $(OBJS)

clean:
	${RM} ${OBJS}
	@echo "$(_RED).o files removed$'\033[0m"

fclean: clean
	${RM} ${NAME}
	@echo "$(_RED)Executable removed$'\033[0m"

re: fclean
	@make all

.PHONY: all clean fclean re
