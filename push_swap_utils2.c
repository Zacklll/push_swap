/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:56:32 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/30 12:13:05 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index(t_vu *stack_b, int par)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->data == par)
			return (i);
		i++;
		stack_b = stack_b->next;
	}
	return (0);
}

int	find_next_max(t_vu *stack_b, int max)
{
	int		second_max;
	t_vu	*current;

	second_max = -1;
	current = stack_b;
	while (current != NULL)
	{
		if (current->data > second_max && current->data < max)
		{
			second_max = current->data;
		}
		current = current->next;
	}
	return (second_max);
}

int	find_next_max_index(t_vu *stack_b, int par)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->data == find_next_max(stack_b, par))
			return (i);
		i++;
		stack_b = stack_b->next;
	}
	return (0);
}
