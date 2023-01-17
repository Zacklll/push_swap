/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:17:37 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/17 17:32:45 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	loop_ra(t_vu **stack_a, t_vu **stack_b)
{
	while ((*stack_a)->data != min(*stack_a))
		rotate_ra(stack_a);
	push_b(stack_a, stack_b);
	printf("ra\npb\n");
}
void	loop_rra(t_vu **stack_a, t_vu **stack_b)
{
	while ((*stack_a)->data != min(*stack_a))
		revers_rotate_rra(stack_a);
	push_b(stack_a, stack_b);
	printf("ra\npb\n");
}

void	sort_five(t_vu **stack_a, t_vu **stack_b)
{
	if (find_min(*stack_a) == -1)
		loop_ra(stack_a, stack_b);
	else if (find_min(*stack_a) == 1)
		loop_rra(stack_a, stack_b);
	if (find_min(*stack_a) == -1)
		loop_ra(stack_a, stack_b);
	else if (find_min(*stack_a) == 1)
		loop_rra(stack_a, stack_b);
	sort_3numb(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
	printf("pa\npa\n");
}