/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:55:01 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/30 12:13:32 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_value(t_vu *stack)
{
	t_vu	*k;
	int		c;

	k = stack;
	c = k->data;
	while (k->next)
	{
		if (c < k->next->data)
			c = k->next->data;
		k = k->next;
	}
	return (c);
}

int	min(t_vu *stack)
{
	t_vu	*k;
	int		c;

	k = stack;
	c = k->data;
	while (k->next)
	{
		if (c > k->next->data)
			c = k->next->data;
		k = k->next;
	}
	return (c);
}
