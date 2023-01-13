/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:13:20 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/12 21:03:59 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
	// push_a(&stack_a, &stack_b);
	
	push_b(&stack_a,&stack_b);
	push_b(&stack_a,&stack_b);
	push_b(&stack_a,&stack_b);
    t_vu *p = stack_a;
	// rotate_rr(&stack_a,&stack_b);
	while (p)
	{
		printf("		|stack_a|  === %d\n", p->data);
		p = p->next;
	}

	t_vu *p2 = stack_b;
	while (p2)
	{
		printf("					|stack_b|  === %d\n", p2->data);
		p2 = p2->next;
	}
	rotate_rrr(&stack_a,&stack_b);
	p = stack_a;
	while (p)
	{
		printf("		|stack_a|  === %d\n", p->data);
		p = p->next;
	}
	p2 = stack_b;
	while (p2)
	{
		printf("					|stack_b|  === %d\n", p2->data);
		p2 = p2->next;
	}
}