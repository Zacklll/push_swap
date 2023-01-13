/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:10:06 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/13 22:09:34 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdlib.h>

typedef struct t_vu
{
    int data;
    struct t_vu *next;
}           t_vu;   

void	ft_lstadd_back(t_vu **lst, t_vu *new);
char	**ft_split(char const *st, char c);
t_vu	*ft_lstnew(int a);
void    push_a(t_vu **stack_a, t_vu **stack_b);
int	    ft_lstsize(t_vu *lst);
void    swap_sb(t_vu **satck_b);
void	ft_lstadd_front(t_vu **lst, t_vu *new);
void    swap_sa(t_vu **satck_a);
void    push_b(t_vu **stack_a, t_vu **stack_b);
void    rotate_a(t_vu   **stack_a);
void    revers_rotate_rra(t_vu   **stack_a);
void    revers_rotate_rrb(t_vu   **stack_b);
void    rotate_rr(t_vu  **stack_a, t_vu **stack_b);
void	rotate_rb(t_vu **stack_b);
void	rotate_ra(t_vu **stack_a);
void    rotate_rrr(t_vu **stack_a, t_vu **stack_b);

#endif