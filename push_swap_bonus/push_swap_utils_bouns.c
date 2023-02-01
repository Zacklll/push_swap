/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_bouns.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:01:15 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/31 19:34:01 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push_a(t_var    **stack_a, t_var    **stack_b)
{
	t_var	*head;

	if (ft_lstsize(*stack_b) < 1)
		return ;
	head = (*stack_b);
	(*stack_b) = head->next;
	ft_lstadd_front(stack_a, head);
}

void	swap_sb(t_var   **stack_b)
{
	t_var	*head;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	head = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	(*stack_b) = head;
}

void	push_b(t_var    **stack_a, t_var    **stack_b)
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
	rotate_rb(stack_b);
	rotate_ra(stack_a);
}
void	swap_sa(t_var   **stack_a)
{
	int	x;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	x = (*stack_a)->data;
	(*stack_a)->data = (*stack_a)->next->data;
	(*stack_a)->next->data = x;
}
