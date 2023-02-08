/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_bouns.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:01:15 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/08 13:59:49 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push_a(t_var **stack_a, t_var **stack_b)
{
	t_var	*head;

	if (ft_lstsize(*stack_b) < 1)
		return ;
	head = (*stack_b);
	(*stack_b) = head->next;
	ft_lstadd_front(stack_a, head);
}

void	swap_sb(t_var **stack_b)
{
	t_var	*head;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	head = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	(*stack_b) = head;
}

void	push_b(t_var **stack_a, t_var **stack_b)
{
	t_var	*head;

	if (ft_lstsize(*stack_a) < 1)
		return ;
	head = (*stack_a);
	(*stack_a) = head->next;
	ft_lstadd_front(stack_b, head);
}

void	rotate_ra(t_var **stack_a)
{
	t_var	*head;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	head = (*stack_a);
	(*stack_a) = head->next;
	ft_lstadd_back(stack_a, head);
	head->next = NULL;
}

void	swap_sa(t_var **stack_a)
{
	int	x;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	x = (*stack_a)->data;
	(*stack_a)->data = (*stack_a)->next->data;
	(*stack_a)->next->data = x;
}
