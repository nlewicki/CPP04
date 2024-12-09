# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 12:16:53 by nlewicki          #+#    #+#              #
#    Updated: 2024/12/09 15:28:17 by nlewicki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++17

NAME = fire

SRCS = main.cpp \
		Dog.cpp \
		Cat.cpp \
		Animal.cpp \
		Brain.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
