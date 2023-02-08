/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:35:43 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/08 17:37:59 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

void	loop_stack_a(t_vu *stack_a, int *p)
{
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(stack_a);
	while (stack_a)
	{
		i = 0;
		while (i < size)
		{
			if (stack_a->data == p[i])
			{
				stack_a->index = i;
				break ;
			}
			i++;
		}
		stack_a = stack_a->next;
	}
}

int	sort_tab(t_vu *stack_a)
{
	t_vu	*t;
	int		i;
	int		*p;

	t = stack_a;
	i = 0;
	p = malloc((ft_lstsize(stack_a) * sizeof(int)));
	if (!p)
		return (0);
	while (t)
	{
		p[i] = t->data;
		t = t->next;
		i++;
	}
	ft_sort_int_tab(p, i);
	loop_stack_a(stack_a, p);
	free(p);
	return (0);
}
