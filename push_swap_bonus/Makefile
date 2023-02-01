# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 21:33:31 by zael-wad          #+#    #+#              #
#    Updated: 2023/02/01 13:53:02 by zael-wad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME= push
SRC =  get_next_line/get_next_line.c get_next_line/get_next_line_utils.c push_swap_bonus.c\
		push_swap_utils_bouns.c push_swap_utils_bouns1.c ft_split.c\

OBJ = $(SRC:.c=.o)

# OBJS = $(SRC:.c=bonus.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) 
	cc  -Wall -Wextra -Werror push_swap_bonus.c $(NAME) -o push_swap_bonus -fsanitize=address

# bonus: $(OBJS)
# 	ar rc $(NAME) $(OBJS) 
# 	cc  -Wall -Wextra -Werror push_swap.c $(NAME) -o push_swap_bonus
	
clean:
	rm $(OBJ) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all