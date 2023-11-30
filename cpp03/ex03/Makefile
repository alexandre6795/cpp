# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/11/30 09:43:39 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= Diamond
CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -Wshadow
SRCS			= src/main.cpp\
				src/ClapTrap.Class.cpp\
				src/ScavTrap.Class.cpp\
				src/DiamondTrap.Class.cpp\
				src/FragTrap.Class.cpp
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
