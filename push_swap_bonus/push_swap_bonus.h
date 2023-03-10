/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:24:42 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/08 17:52:40 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../ft_printf/ft_printf.h"
# include "../get_next_line/get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct t_var
{
	int				data;
	struct t_var	*next;
}					t_var;

void				checker(t_var **stack_a);
void				check_rep(t_var *stack_a);
void				swap_sb(t_var **satck_b);
void				swap_sa(t_var **satck_a);
void				rotate_rb(t_var **stack_b);
void				rotate_ra(t_var **stack_a);
void				push_b(t_var **stack_a, t_var **stack_b);
void				push_a(t_var **stack_a, t_var **stack_b);
void				revers_rotate_rra(t_var **stack_a);
void				revers_rotate_rrb(t_var **stack_b);
void				rotate_rr(t_var **stack_a, t_var **stack_b);
void				rotate_rrr(t_var **stack_a, t_var **stack_b);
void				ft_free_all(char **tmp);
void				ft_lstadd_back(t_var **lst, t_var *new);
void				ft_lstclear(t_var *head);
char				**ft_split(char const *st, char c);
void				ft_lstadd_front(t_var **lst, t_var *new);
void				push_a(t_var **stack_a, t_var **stack_b);
t_var				*ft_lstnew(int a);
int					check_if_sorted(t_var *stack_a);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_lstsize(t_var *lst);

#endif