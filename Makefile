# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/17 18:38:16 by phaslan           #+#    #+#              #
#    Updated: 2022/01/30 16:15:33 by phaslan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
FLAGS = -Llibft -lft
RM = rm -f

GAME_FILES = main \
			 stack_start \
			 init_list \


LIBFT_DIR = libft/
GAME_SRCS = $(addsuffix .c, $(GAME_FILES)) \

OBJS =	$(addsuffix .o, $(GAME_FILES)) \

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(CFLAGS) -o $@ $^ $(FLAGS)

all: $(NAME)

clean:
	make clean -C libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C libft
	$(RM) $(NAME)

norminette:
	norminette $(addsuffix .c, $(GAME_FILES))

re: clean all
	make re -C libft

.PHONY: bonus all clean fclean re
