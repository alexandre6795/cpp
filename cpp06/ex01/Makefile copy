# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 15:41:45 by akastler          #+#    #+#              #
#    Updated: 2024/04/19 10:16:23 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#name of the executable
NAME = Bureaucrat

DIR = 

#files (don't add the .cpp extension)
FILES =		main \
			AForm\
			Bureaucrat\
			PresidentialPardonForm\
			RobotomyRequestForm\
			ShrubberyCreationForm\
			Intern\

#add dir to files
FILES := $(addprefix , $(FILES))

#modification of files variables to add .cpp extension
SRCS = $(FILES:=.cpp)

#modification of srcs variables to add .o extension
OBJS = $(SRCS:.cpp=.o)

#compiler and flags
CXX = c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -g3

#utils
RM = rm -f


#variables for the progress bar and percentage
COUNT = 1
TOTAL = $(words $(SRCS))
PERCENT = $(shell expr $(COUNT) '*' 100 / $(TOTAL))
MAXSPACE = $(words $(SRCS))
SPACENEED = $(shell expr $(MAXSPACE) '*' $(PERCENT) / 100)
SPACEMISS = $(shell expr $(MAXSPACE) - $(SPACENEED))

#rules
all: $(NAME)

#.SILENT: is used to hide the compilation commands
.SILENT: $(OBJS) fclean $(NAME) clean re mov_objs

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@printf "\033[2K\r$(YELLOW)[$(COUNT)/$(TOTAL)]"
	@printf "["
	@printf "\033[7m"
	@printf "%*s" $(SPACENEED) ""
	@printf "\033[27m"
	@printf "%*s" $(SPACEMISS) ""
	@printf "]"
	$(eval PERCENT=$(shell expr $(COUNT) '*' 100 / $(TOTAL)))
	@printf "[$(PERCENT)%%]"
	@printf " Compiling file : $(CYAN)$<  $(RESET)"
	$(eval COUNT=$(shell expr $(COUNT) + 1))
	$(eval PERCENT=$(shell expr $(COUNT) '*' 100 / $(TOTAL)))
	$(eval SPACENEED=$(shell expr $(MAXSPACE) '*' $(PERCENT) / 100))
	$(eval SPACEMISS=$(shell expr $(MAXSPACE) - $(SPACENEED)))


$(NAME): $(OBJS)
	@printf "\033[2K\r$(CYAN)[$(TOTAL)/$(TOTAL)][\033[7m"
	@printf "%*s" $(MAXSPACE) ""
	@printf "\033[27m][100%%] File compilation finished !\n"
	@printf "$(YELLOW)Compiling exec named : $(CYAN)$(NAME)$(RESET)"
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@printf "\033[2K\r$(CYAN)Done ! $(NAME) is ready to use !$(RESET)\n"
#	@$(MAKE) mov_objs

clean:
	@printf "$(YELLOW)Cleaning...$(RESET)"
	$(RM) $(OBJS)
	@printf "\033[2K\r$(CYAN)Cleaning done !$(RESET)\n"

fclean:
	@printf "$(YELLOW)FCleaning...$(RESET)"
	$(RM) $(NAME) $(OBJS)
	@printf "\033[2K\r$(CYAN)FCleaning done !$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re