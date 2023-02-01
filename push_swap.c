/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:13:20 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/01 06:53:48 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <string.h>

int	find_max_index_stackb(t_vu *stack_b)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->data == max_value(stack_b))
			return (i);
		i++;
		stack_b = stack_b->next;
	}
	return (0);
}

int	find_min(t_vu *stack_a)
{
	int	i;

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
	return (1);
}

void	check_rep(t_vu *stack_a)
{
	t_vu	*tmp;
	int		i;

	i = 0;
	while (stack_a->next)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (stack_a->data == tmp->data)
			{
				printf("Error");
				exit(0);
			}
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
}

void	push_swap(t_vu **stack_a)
{
	t_vu	*stack_b;

	stack_b = NULL;
	check_rep(*stack_a);
	sort_tab(*stack_a);
	if (ft_lstsize(*stack_a) == 2)
	{
		if ((*stack_a)->data > (*stack_a)->next->data)
			swap_sa(stack_a);
	}
	if (ft_lstsize(*stack_a) == 3)
		sort_3numb(stack_a);
	else if (ft_lstsize(*stack_a) >= 4 && ft_lstsize(*stack_a) <= 20)
		sort_five(stack_a, &stack_b);
	else if (ft_lstsize(*stack_a) > 20)
	{
		if (ft_lstsize(*stack_a) > 300)
			sort_high2(stack_a, &stack_b);
		else
			sort_high(stack_a, &stack_b);
		push_back_a(stack_a, &stack_b);
	}
	ft_lstclear(*stack_a);
}

void	check_sing(char a, char b)
{
	if ((b == '+' || b == '-'))
	{
		printf("Error sing\n");
		exit(0);
	}
	else if ((a == '+' || a == '-') && b != ' ')
	{
		if (a < '0' && a > '9')
		{
			printf("Error sings\n");
			exit(0);
		}
	}
	// if ()
	// {
	// 	printf("Error sing\n");
	// 	exit (0);
	// }
}
int	check_if_sorted(t_vu *stack_a)
{
	t_vu	*head;

	head = stack_a;
	while (head->next != NULL)
	{
		if (head->data > head->next->data)
		{
			return (-1);
		}
		head = head->next;
	}
	return (1);
}

void	check_args(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-' || str[i][j] == '+')
				j++;
			while (str[i][j] < '0' && str[i][j] > '9')
			{
				printf("Error\n");
				exit (0);
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	char	**tmp;
	t_vu	*stack_a;

	i = 1;
	if (ac > 2)
	{
		while (av[i])
		{
			j = 0;
			tmp = ft_split(av[i], ' ');
			check_args(tmp);
			while (tmp[j])
			{
				ft_lstadd_back(&stack_a, ft_lstnew(atoi(tmp[j])));
				j++;
			}
			i++;
		}
		// j = 0;
		// while (tmp[j])
		// {
		// 	free(tmp[j]);
		// 	j++;
		// }
		// free(tmp);
		if (check_if_sorted(stack_a) == -1)
			push_swap(&stack_a);
		// ft_lstclear(stack_a);
	}
	// while (1)
	// {}
}
