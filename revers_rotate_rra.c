/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_rotate_rra.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:52:00 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/12 20:42:47 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    revers_rotate_rra(t_vu   **stack_a)
{
    t_vu *tmp;
    t_vu *tmp2;
    
    tmp = (*stack_a);
    tmp2 = tmp;
    while (tmp2->next->next)
        tmp2 = tmp2->next;
    while (tmp->next)
        tmp = tmp->next;
    tmp2->next = NULL;
    ft_lstadd_front(stack_a,tmp);
}
    