# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 10:25:41 by rbourgea          #+#    #+#              #
#    Updated: 2021/07/31 18:12:18 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	whatever

SRCS	=	main.cpp

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