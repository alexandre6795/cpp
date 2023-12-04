# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/12/04 09:28:47 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= Materia
CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS			= src/main.cpp\
src/AMateria.Class.cpp\
src/Character.Class.cpp\
src/Cure.Class.cpp\
src/Ice.Class.cpp\
src/MateriaSource.Class.cpp\

OBJS			= $(SRCS:.cpp=.o)

all				: $(NAME)

$(NAME)			: $(OBJS)
					@$(CXX) $(OBJS) -o $(NAME)

%.o				: %.cpp
					$(CXX) $(CXXFLAGS) -o $@ -c $<

clean			:
					rm -rf $(OBJS)

fclean			: clean
					rm -rf $(NAME)

re				: fclean all

.PHONY			: all clean fclean re
