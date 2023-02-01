/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_rotate_rra.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:52:00 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/28 21:35:35 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revers_rotate_rra(t_vu **stack_a)
{
	t_vu	*tmp;
	t_vu	*tmp2;

	if (!*stack_a || ft_lstsize(*stack_a) < 2)
		return ;
	tmp = (*stack_a);
	tmp2 = tmp;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp2->next = NULL;
	ft_lstadd_front(stack_a, tmp);
	ft_printf("rra\n");
}
