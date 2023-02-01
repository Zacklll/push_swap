/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:40:42 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/30 12:08:25 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	comper(t_vu *stack, int mx)
{
	if (mx > ft_lstsize(stack) / 2)
		return (1);
	return (0);
}

int	push_first(t_vu **stack_b)
{
	int	i;
	int	max_index;
	int	next_max;
	int	max;

	max_index = 0;
	i = 0;
	max = max_value(*stack_b);
	max_index = find_max_index(*stack_b, max);
	next_max = find_next_max_index(*stack_b, max);
	if (comper(*stack_b, max_index) == 1)
		max_index = ft_lstsize(*stack_b) - max_index;
	if (comper(*stack_b, next_max) == 1)
		next_max = ft_lstsize(*stack_b) - next_max;
	if (max_index < next_max)
		return (1);
	return (0);
}

void	impsh(t_vu **stack_a, t_vu **stack_b, int pos)
{
	int	size;

	size = ft_lstsize(*stack_b);
	if (pos <= size / 2)
	{
		while (pos)
		{
			rotate_rb(stack_b);
			pos--;
		}
	}
	else
	{
		while (size - pos)
		{
			revers_rotate_rrb(stack_b);
			pos++;
		}
	}
	push_a(stack_a, stack_b);
}

void	push_back_a(t_vu **stack_a, t_vu **stack_b)
{
	int	max;

	while ((*stack_b))
	{
		max = max_value(*stack_b);
		if (push_first(stack_b) == 0)
		{
			impsh(stack_a, stack_b, find_next_max_index(*stack_b, max));
			impsh(stack_a, stack_b, find_max_index(*stack_b, max));
			if ((*stack_a)->data > (*stack_a)->next->data)
				swap_sa(stack_a);
		}
		else if (push_first(stack_b) == 1)
		{
			impsh(stack_a, stack_b, find_max_index(*stack_b, max));
		}
	}
}
