/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:24:42 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/01 13:07:30 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct t_var
{
	int				data;
	struct t_var	*next;
}					t_var;

// char				*ft_strjoin(char const *s1, char const *s2);
void				push_swap_bonus(t_var *stack_a);

t_var			*ft_lstnew(int a);
void			swap_sb(t_var **satck_b);
void			swap_sa(t_var **satck_a);
void			rotate_rb(t_var **stack_b);
void			rotate_ra(t_var **stack_a);
void			push_b(t_var **stack_a, t_var **stack_b);
void			push_a(t_var **stack_a, t_var **stack_b);
void			revers_rotate_rra(t_var **stack_a);
void			revers_rotate_rrb(t_var **stack_b);
void			rotate_rr(t_var **stack_a, t_var **stack_b);
void			rotate_rrr(t_var **stack_a, t_var **stack_b);
void			sort_high2(t_var **stack_a, t_var **stack_b);
void			sort_high(t_var **stack_a, t_var **stack_b);
void			sort_3numb(t_var **stack_a);
void			push_back_a(t_var **stack_a, t_var **stack_b);
void			sort_five(t_var **stack_a, t_var **stack_b);
void			ft_lstadd_back(t_var **lst, t_var *new);
void			ft_lstclear(t_var *head);
char			**ft_split(char const *st, char c);
void			ft_lstadd_front(t_var **lst, t_var *new);
void			push_a(t_var **stack_a, t_var **stack_b);
int				find_min(t_var *stack_a);
int				ft_lstsize(t_var *lst);
int				sort_tab(t_var *stack_a);
int				find_max_index(t_var *stack_b, int par);
int				min(t_var *stack_a);
int				find_next_max_index(t_var *stack_b, int par);
int				max_value(t_var *stack);

#endif