# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/12/01 09:12:31 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= Pet
CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS			= src/main.cpp\
				src/Animal.Class.cpp\
				src/WrongCat.Class.cpp\
				src/WrongAnimal.Class.cpp\
				src/Brain.Class.cpp\
				src/Dog.Class.cpp\
				src/Cat.Class.cpp
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
