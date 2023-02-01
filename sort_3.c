/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:41 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/30 12:06:49 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3numb(t_vu **stack_a)
{
	if ((*stack_a)->data == max_value(*stack_a))
	{
		rotate_ra(stack_a);
		if ((*stack_a)->data > (*stack_a)->next->data)
			swap_sa(stack_a);
	}
	else if ((*stack_a)->next->data == max_value(*stack_a))
	{
		revers_rotate_rra(stack_a);
		if ((*stack_a)->data > (*stack_a)->next->data)
			swap_sa(stack_a);
	}
	else
	{
		swap_sa(stack_a);
		if ((*stack_a)->data > (*stack_a)->next->data)
			swap_sa(stack_a);
	}
}
