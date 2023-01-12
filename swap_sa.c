/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:31:06 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/12 00:50:43 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_sa(t_vu *stack_a)
{
    int     tmp;
    
    // if (!head)
    //     return (NULL);
    // if (ft_lstsize(head) < 2)
    //     return (NULL);
    tmp = stack_a->data;
    stack_a->data = stack_a->next->data;
    stack_a->next->data = tmp;
}