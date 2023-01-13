/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:13:20 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/14 00:43:54 by zael-wad         ###   ########.fr       */
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
		if (c < k->data)
			c = k->data;
		k = k->next;
	}
	return c;
}
int	main(int ac, char *av[])
{
	(void)ac;
	t_vu *stack_a;
	// t_vu *stack_b;

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
	// push_a(&stack_a, &stack_b);
		t_vu *k = stack_a;
		
	
		if (k->data == max(stack_a))
		{
			rotate_ra(&stack_a);
			if(stack_a->data > stack_a->next->data)
			{
				
				swap_sa(&stack_a);
				
			}
		}
		// else if (k->data > k->next->data && k->next->data > k->next->next->data)
		// {
		// 	swap_sa(&stack_a);
		// 	revers_rotate_rra(&stack_a);
		// }
		// else if (k->data > k->next->data && k->next->data < k->next->next->data)
		// 	rotate_ra(&stack_a);
		// else if (k->data < k->next->data && k->next->data < k->next->next->data)
		// {
		// 	swap_sa(&stack_a);
		// 	rotate_ra(&stack_a);
		// }
		// else if (k->data > k->next->data && k->next->data < k->next->next->data && k->data > k->next->next->data)
		// {
		// 	revers_rotate_rra(&stack_a);
		// }
	t_vu *p = stack_a;
	while (p)
	{
		printf("%d \n ", p->data);
		p = p->next;
	}
}