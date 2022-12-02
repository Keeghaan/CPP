# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 16:38:07 by jcourtoi          #+#    #+#              #
#    Updated: 2022/12/02 16:38:44 by jcourtoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	serialKiller

SRCS =	main.cpp func.cpp

CXX =	c++

_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_END=	$'\033[0m

OBJS = ${SRCS:.cpp=.o}
DEPS = ${OBJS:.o=.d}

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -rf

all: ${NAME}

#.cpp.o:
#		$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

${NAME}: ${OBJS}
	@echo "$(_GREEN)Executable created : ${NAME}$(_END)"
	${CXX} ${CXXFLAGS}  -o $(NAME) $(OBJS)

clean:
	${RM} ${OBJS} ${DEPS}
	@echo "$(_RED).o files removed$'\033[0m"

fclean: clean
	${RM} ${NAME}
	@echo "$(_RED)Executable removed$'\033[0m"

re: fclean
	@make all

vtest: ${NAME}
	-valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./${NAME}

test: ${NAME}
	./${NAME}

-include ${DEPS}
.PHONY: all clean fclean re
