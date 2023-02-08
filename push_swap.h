/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:10:06 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/08 11:35:02 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct t_vu
{
	int			data;
	int			index;
	struct t_vu	*next;
}				t_vu;

t_vu			*ft_lstnew(int a);
void			swap_sb(t_vu **satck_b);
void			swap_sa(t_vu **satck_a);
void			rotate_rb(t_vu **stack_b);
void			rotate_ra(t_vu **stack_a);
void			push_b(t_vu **stack_a, t_vu **stack_b);
void			push_a(t_vu **stack_a, t_vu **stack_b);
void			revers_rotate_rra(t_vu **stack_a);
void			revers_rotate_rrb(t_vu **stack_b);
void			rotate_rr(t_vu **stack_a, t_vu **stack_b);
void			rotate_rrr(t_vu **stack_a, t_vu **stack_b);
void			sort_high2(t_vu **stack_a, t_vu **stack_b);
void			sort_high(t_vu **stack_a, t_vu **stack_b);
void			sort_3numb(t_vu **stack_a);
void			push_back_a(t_vu **stack_a, t_vu **stack_b);
void			sort_five(t_vu **stack_a, t_vu **stack_b);
void			ft_lstadd_back(t_vu **lst, t_vu *new);
void			ft_lstclear(t_vu *head);
char			**ft_split(char const *st, char c);
void			ft_lstadd_front(t_vu **lst, t_vu *new);
void			push_a(t_vu **stack_a, t_vu **stack_b);
int				find_min(t_vu *stack_a);
int				ft_lstsize(t_vu *lst);
int				sort_tab(t_vu *stack_a);
int				find_max_index(t_vu *stack_b, int par);
int				min(t_vu *stack_a);
int				ft_atoi(const char *at);
int				find_next_max_index(t_vu *stack_b, int par);
int				max_value(t_vu *stack);

#endif