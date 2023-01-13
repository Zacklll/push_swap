/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 02:19:04 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/12 20:30:28 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_vu **stack_a, t_vu **stack_b)
{
	t_vu *head;

	head = (*stack_a);
	(*stack_a) = head->next;
	ft_lstadd_front(stack_b, head);
}