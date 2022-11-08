# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 19:33:59 by jcourtoi          #+#    #+#              #
#    Updated: 2022/11/08 15:17:35 by jcourtoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	human

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CC =	c++

_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_END=	$'\033[0m

HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

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
