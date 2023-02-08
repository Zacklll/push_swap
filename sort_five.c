/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:17:37 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/08 14:38:31 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	loop_ra(t_vu **stack_a, t_vu **stack_b)
{
	while ((*stack_a)->data != min(*stack_a))
		rotate_ra(stack_a);
	push_b(stack_a, stack_b);
}

void	loop_rra(t_vu **stack_a, t_vu **stack_b)
{
	while ((*stack_a)->data != min(*stack_a))
		revers_rotate_rra(stack_a);
	push_b(stack_a, stack_b);
}

void	sort_five(t_vu **stack_a, t_vu **stack_b)
{
	while (ft_lstsize(*stack_a) != 3)
	{
		if (find_min(*stack_a) == -1)
			loop_ra(stack_a, stack_b);
		else if (find_min(*stack_a) == 1)
			loop_rra(stack_a, stack_b);
	}
	if (ft_lstsize(*stack_a) == 3)
		sort_3numb(stack_a);
	while (*stack_b)
	{
		push_a(stack_a, stack_b);
	}
}
