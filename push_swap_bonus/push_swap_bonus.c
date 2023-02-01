/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:24:11 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/01 14:17:10 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check(char *str)
{
	if (strcmp(str, "sa\n") == 0)
		return (1);
	else if (strcmp(str, "sb\n") == 0)
		return (1);
	else if (strcmp(str, "ra\n") == 0)
		return (1);
	else if (strcmp(str, "rb\n") == 0)
		return (1);
	else if (strcmp(str, "rra\n") == 0)
	 	return (1);
	else if (strcmp(str, "rrb\n") == 0)
		return (1);
	else if (strcmp(str, "pa\n") == 0)
		return (1);
	else if (strcmp(str, "pb\n") == 0)
		return (1);
	return (0);
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
void	fun(t_var **stack_a, t_var **stack_b, char *str)
{
	if (strcmp(str,"sa\n") == 0)
        swap_sa(stack_a);
    else if (strcmp(str,"sb\n") == 0)
        swap_sb(stack_b);
    else if (strcmp(str,"pa\n") == 0)
        push_a(stack_a,stack_b);
    else if (strcmp(str,"pb\n") == 0)
        push_b(stack_a,stack_b);
    else if (strcmp(str,"ra\n") == 0)
        rotate_ra(stack_a);
    else if (strcmp(str,"rb\n") == 0)
        rotate_rb(stack_b);
    else if (strcmp(str,"rra\n") == 0)
        revers_rotate_rra(stack_a);
    else if (strcmp(str,"rrb\n") == 0)
        revers_rotate_rra(stack_b);
}

int	check_if_sorted(t_var *stack_a)
{
	t_var	*head;
	if (!stack_a)
		return 0;
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

int	main(int ac, char *av[])
{
	(void)ac;
	char *tmp1 = NULL;
	// char *save;
	int i;
	int j;
	char **tmp;
	t_var *stack_a;
	t_var *stack_b;

	i = 1;
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
	if (check_if_sorted(stack_a) != 1)
	{
		tmp1 = get_next_line(0);
		while (tmp1)
		{	
			if (check(tmp1) == 0)
			{
				printf("Error\n");
				exit(0);
			}
			fun(&stack_a,&stack_b,tmp1);
			free(tmp1);
			tmp1 = get_next_line(0);
			
			// printf("%s\n",tmp1);
			// free(tmp1);		
		}
	
		if (check_if_sorted(stack_a) == 1)
			printf("OK\n");
		else
		{
			printf("KO\n");
			exit(0);
		}
	}
    
    // else 
    //     printf("ERROR\n");
    //     exit(0);
    // t_var *p = stack_a;
	// while (p)
	// {
	//     printf("|| %d \n",p->data);
	//     p = p->next;
	// }
}