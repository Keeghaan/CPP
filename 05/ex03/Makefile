# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 14:17:04 by jcourtoi          #+#    #+#              #
#    Updated: 2022/11/26 14:17:40 by jcourtoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ActiveForm

SRCS =	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp \

CXX =	c++

_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_END=	$'\033[0m

OBJS = ${SRCS:.cpp=.o}
DEPS = ${OBJS:.o=.d}

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 

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
	-valgrind --leak-check=full --show-leak-kinds=all ./${NAME}

test: ${NAME}
	./${NAME}

-include ${DEPS}
.PHONY: all clean fclean re
