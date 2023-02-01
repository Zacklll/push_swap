/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:16:22 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/30 22:01:38 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_vu **stack_a, t_vu **stack_b)
{
	t_vu	*head;

	if (ft_lstsize(*stack_b) < 1)
		return ;
	head = (*stack_b);
	(*stack_b) = head->next;
	ft_lstadd_front(stack_a, head);
	ft_printf("pa\n");
}
