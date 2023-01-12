/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:28:10 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/12 00:50:52 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sb(t_vu *stack_b)
{
	int     tmp;

	// if (!stack_b)
	//     return (NULL);
	// if (ft_lstsize(stack_b) < 2)
	//     return (NULL);
	tmp = stack_b->data;
	stack_b->data = stack_b->next->data;
	stack_b->next->data = tmp;
}