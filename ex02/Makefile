# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/28 10:40:56 by rbourgea          #+#    #+#              #
#    Updated: 2021/07/31 18:13:13 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		array

SRCS =		main.cpp

CC		=	clang++

OBJS	= 	$(SRCS:%.cpp=%.o)

INC		=	-I./

CFLAGS	=	-Wall -Wextra -Werror #-Wno-conversion

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			clang++ $(CFLAGS) $(INC) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all