# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/11/14 13:47:05 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= Phonebook
CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS			= Phonebook.cpp
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
