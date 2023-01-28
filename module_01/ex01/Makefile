# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 15:57:00 by areheman          #+#    #+#              #
#    Updated: 2022/12/09 10:55:56 by areheman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
GCC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(GCC) $(CFLAGS) -o $@ $^

.cpp.o :
		$(GCC) $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJS)

fclean : clean 
		rm -rf $(NAME)

re : clean fclean all

.PHONEY : re all clean fclean