/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:13:20 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/17 20:49:26 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int max(t_vu *stack_a)
{
	t_vu *k;
	k = stack_a;
	int c;

	c = k->data;
	while (k->next)
	{
		if (c < k->next->data)
			c = k->next->data;
		k = k->next;
	}
	return c;
}
int		min_index(t_vu *stack_a)
{
	int i;

	i = 0;
	while (stack_a->next)
	{
		if (stack_a->data == min(stack_a))
			return (i);
		i++;
		stack_a = stack_a->next;
	}
	return (0);
}

int min(t_vu *stack_a)
{
	t_vu *k;
	k = stack_a;
	int c;

	c = k->data;
	while (k->next)
	{
		if (c > k->next->data)
			c = k->next->data;
		k = k->next;
	}
	return c;
}

int find_min(t_vu	*stack_a)
{
	int i;
	
	i = 0;
	while ((stack_a))
	{
		if ((stack_a)->data == min(stack_a))
		{
			if (i <= ft_lstsize(stack_a) / 2)
				return (-1);
			else if (i > ft_lstsize(stack_a) / 2)
				return (1);
		}
		i++;
		 (stack_a) = (stack_a)->next;
	}
	return 1;
}

int	main(int ac, char *av[])
{
	(void)ac;
	t_vu *stack_a;
	t_vu *stack_b;

	
	int i, j;
	i = 1;
	char **tmp;
	while (av[i])
	{
		j = 0;
		tmp = ft_split(av[i], ' ');
		while (tmp[j])
		{
			ft_lstadd_back(&stack_a, ft_lstnew(atoi(tmp[j])));
			j++;
		}
		i++;
	}
	// t_vu *pt = stack_a;
	if (ft_lstsize(stack_a) == 3)
		sort_3numb(&stack_a);
	else if (ft_lstsize(stack_a) == 5)
		sort_five(&stack_a,&stack_b);
		printf("\netst   : %d", min_index(stack_a));

	
		
	t_vu *p = stack_a;
	// t_vu *p1 = stack_b;
		
		while (p)
		{
			printf(" %d\n ", p->data);
			p = p->next;
		}
		// while (p1)
		// {
		// 	printf(" %d\n ", p1->data);
		// 	p1 = p1->next;
		// }
}