/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_bonus2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:38:15 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/08 14:36:04 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	revers_rotate_rra(t_var **stack_a)
{
	t_var	*tmp;
	t_var	*tmp2;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	tmp = (*stack_a);
	tmp2 = tmp;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp2->next = NULL;
	ft_lstadd_front(stack_a, tmp);
}

void	revers_rotate_rrb(t_var **stack_b)
{
	t_var	*tmp;
	t_var	*tmp2;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	tmp = (*stack_b);
	tmp2 = tmp;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp2->next = NULL;
	ft_lstadd_front(stack_b, tmp);
}

void	rotate_rb(t_var **stack_b)
{
	t_var	*head;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	head = (*stack_b);
	(*stack_b) = head->next;
	ft_lstadd_back(stack_b, head);
	head->next = NULL;
}

void	rotate_rr(t_var **stack_a, t_var **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	rotate_rb(stack_b);
	rotate_ra(stack_a);
}

void	rotate_rrr(t_var **stack_a, t_var **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	revers_rotate_rra(stack_a);
	revers_rotate_rrb(stack_b);
}
