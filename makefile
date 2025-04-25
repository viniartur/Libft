# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/18 14:07:21 by vvieira           #+#    #+#              #
#    Updated: 2025/04/25 15:52:48 by vvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                  MAKEFILE                                    #
# **************************************************************************** #

NAME 	=libft.a
FLAGS	=-Wall -Wextra -Werror
CC		=clang

HEADER	=libft.h
SRC 	= 	ft_strlen.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isalpha \
			ft_memset \
			ft_bzero \


SRCBNS	=

OBJECTS	=$(SRC:.c=.o)
BONUS_OBJS=$(SRCBNS:.c=.o)

%.o %.c $(HEADER)
		$(CC) $(NAME) $(OBJECTS)

all: $(NAME)

bonus:
	@make OBJECTS="$(OBJECTS) $(BONUS_OBJS)" all

clean: 
	rm -f $(OBJECTS) $(BONUS_OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus