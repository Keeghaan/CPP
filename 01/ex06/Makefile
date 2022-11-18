# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 15:15:46 by jcourtoi          #+#    #+#              #
#    Updated: 2022/11/08 15:16:38 by jcourtoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	harlFilter

SRCS = main.cpp Harl.cpp

CC =	c++

_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_END=	$'\033[0m

HEADERS = Harl.hpp

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

vtest: ${NAME}
	-valgrind --leak-check=full --track-origins=yes ./${NAME}

test: ${NAME}
	./${NAME}

.PHONY: all clean fclean re
