/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ra.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:42:49 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/08 14:38:09 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_ra(t_vu **stack_a)
{
	t_vu	*head;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	head = (*stack_a);
	(*stack_a) = head->next;
	ft_lstadd_back(stack_a, head);
	head->next = NULL;
	ft_printf("ra\n");
}
