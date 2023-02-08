/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:24:11 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/08 17:52:57 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_instruction(char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		return (1);
	else if (ft_strcmp(str, "sb\n") == 0)
		return (1);
	else if (ft_strcmp(str, "ra\n") == 0)
		return (1);
	else if (ft_strcmp(str, "rb\n") == 0)
		return (1);
	else if (ft_strcmp(str, "rra\n") == 0)
		return (1);
	else if (ft_strcmp(str, "rrb\n") == 0)
		return (1);
	else if (ft_strcmp(str, "pa\n") == 0)
		return (1);
	else if (ft_strcmp(str, "pb\n") == 0)
		return (1);
	return (0);
}

void	check_args(char *str)
{
	int	i;

	if (str == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if ((str[i] < '0' || str[i] > '9') && (str[i] != '\0'))
	{
		printf("Error \n");
		exit(0);
	}
}

void	call_instruction(t_var **stack_a, t_var **stack_b, char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		swap_sa(stack_a);
	else if (ft_strcmp(str, "sb\n") == 0)
		swap_sb(stack_b);
	else if (ft_strcmp(str, "pa\n") == 0)
		push_a(stack_a, stack_b);
	else if (ft_strcmp(str, "pb\n") == 0)
		push_b(stack_a, stack_b);
	else if (ft_strcmp(str, "ra\n") == 0)
		rotate_ra(stack_a);
	else if (ft_strcmp(str, "rb\n") == 0)
		rotate_rb(stack_b);
	else if (ft_strcmp(str, "rra\n") == 0)
		revers_rotate_rra(stack_a);
	else if (ft_strcmp(str, "rrb\n") == 0)
		revers_rotate_rra(stack_b);
}

void	checker(t_var **stack_a)
{
	char	*tmp1;
	t_var	*stack_b;
	int		size;

	check_rep(*stack_a);
	size = ft_lstsize(*stack_a);
	tmp1 = get_next_line(0);
	while (tmp1)
	{
		if (check_instruction(tmp1) == 0)
		{
			printf("Error\n");
			exit(0);
		}
		call_instruction(stack_a, &stack_b, tmp1);
		free(tmp1);
		tmp1 = get_next_line(0);
	}
	if (check_if_sorted(*stack_a) == 1 && size == ft_lstsize(*stack_a))
		printf("OK\n");
	else
	{
		printf("KO\n");
		exit(0);
	}
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	char	**tmp;
	t_var	*stack_a;

	if (ac != 1)
	{
		i = 1;
		while (av[i])
		{
			j = 0;
			tmp = ft_split(av[i], ' ');
			check_args(tmp[j]);
			while (tmp[j])
			{
				check_args(tmp[j]);
				ft_lstadd_back(&stack_a, ft_lstnew(atoi(tmp[j])));
				j++;
			}
			ft_free_all(tmp);
			i++;
		}
		checker(&stack_a);
	}
}
