# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 21:26:04 by msousa            #+#    #+#              #
#    Updated: 2022/04/09 18:43:25 by msousa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
CC			= clang++
RM			= rm -f
OBJ			= ${SRC:%.cpp=obj/%.o}
SRC			= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp
INC			= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

NAME		= DiamondTrap

${NAME}:	${OBJ}
					${CC} ${CFLAGS} ${OBJ} -o $@

obj/%.o:%.cpp ${INC}
					@mkdir -p $(dir $@)
					${CC} ${CFLAGS} -c $< -o $@

all:			${NAME}

test:			${NAME}
					-./${NAME}

clean:
					${RM} -rf obj

fclean:		clean
					${RM} ${NAME}

re: 			fclean all

.PHONY : 	all clean fclean re
