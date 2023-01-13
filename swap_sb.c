/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:28:10 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/13 22:09:18 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sb(t_vu **stack_b)
{
	t_vu	*head;

	if (!stack_b || ft_lstsize(*stack_b) < 2)
	    return;
	head = (*stack_b);
    (*stack_b) = (*stack_b)->next;
    (*stack_b) = head;
}