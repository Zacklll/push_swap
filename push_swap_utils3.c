/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:47:20 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/30 11:58:42 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_high(t_vu **stack_a, t_vu **stack_b)
{
	int	size;
	int	i;
	int	x;

	size = (ft_lstsize(*stack_a) / 5);
	i = 1;
	x = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= size * i)
		{
			push_b(stack_a, stack_b);
			if ((*stack_b)->index <= (size * i) - (size / 2))
				rotate_rb(stack_b);
			x++;
		}
		else
		{
			rotate_ra(stack_a);
		}
		if (x == size * i)
			i++;
	}
}

void	sort_high2(t_vu **stack_a, t_vu **stack_b)
{
	int	size;
	int	i;
	int	x;

	i = 1;
	x = 0;
	size = (ft_lstsize(*stack_a) / 9);
	while (*stack_a)
	{
		if ((*stack_a)->index <= size * i)
		{
			push_b(stack_a, stack_b);
			if ((*stack_b)->index <= (size * i) - (size / 2))
				rotate_rb(stack_b);
			x++;
		}
		else
		{
			rotate_ra(stack_a);
		}
		if (x == size * i)
			i++;
	}
}
