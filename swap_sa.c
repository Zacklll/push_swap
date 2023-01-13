/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:31:06 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/14 00:40:08 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void    swap_sa(t_vu **stack_a)
{
    
   if (!stack_a || ft_lstsize(*stack_a) <= 1)
	    return;
        int x;
        x = (*stack_a)->data;
        (*stack_a)->data = (*stack_a)->next->data;
        (*stack_a)->next->data = x;
}