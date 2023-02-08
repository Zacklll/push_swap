# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 21:33:31 by zael-wad          #+#    #+#              #
#    Updated: 2023/02/08 18:00:40 by zael-wad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME= push
NAME1= cheker
SRC =   push_swap_utils.c push_swap_utils1.c push_swap_utils2.c sort_3.c ft_printf/funcs1.c ft_printf/funcs2.c \
		ft_printf/ft_check.c ft_printf/ft_printf.c ft_split.c push_a.c push_b.c push_swap.c revers_rotate_rra.c \
		revers_rotate_rrb.c rotate_ra.c rotate_rb.c rotate_rr.c rotate_rrr.c swap_sa.c swap_sb.c sort_five.c \
		sorting.c sort.c push_swap_utils3.c ft_atoi.c\

SRCS = ../get_next_line/get_next_line.c ../get_next_line/get_next_line_utils.c push_swap_bonus.c\
		push_swap_utils_bonus.c push_swap_utils_bonus1.c push_swap_utils_bonus2.c  push_swap_utils_bonus3.c ft_split.c \

OBJ = $(SRC:.c=.o)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) 
	cc  -Wall -Wextra -Werror push_swap.c $(NAME) -o push_swap 
bonus:
	ar rc $(NAME1) $(OBJS)
	cc  -Wall -Wextra -Werror push_swap_bonus.c $(NAME1) -o cheker

clean:
	rm $(OBJ) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all