# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 18:53:10 by jcourtoi          #+#    #+#              #
#    Updated: 2022/10/26 14:32:13 by jcourtoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	megaphone

SRCS =	megaphone.cpp

CC =	c++

_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_END=	$'\033[0m

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -rf

all: ${NAME}

.cpp.o:
		$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

${NAME}: ${OBJS}
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
	-valgrind --leak-check=full --track-origins=yes ./${NAME} "shhhhh... I think the students are asleep..."
	-valgrind --leak-check=full --track-origins=yes ./${NAME} Damnit " ! " "Sorry students, I thought this thing was off."
	-valgrind --leak-check=full --track-origins=yes ./${NAME}

test: ${NAME}
	./${NAME} "shhhhh... I think the students are asleep..."
	./${NAME} Damnit " ! " "Sorry students, I thought this thing was off."
	./${NAME}

.PHONY: all clean fclean re
