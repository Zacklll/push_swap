/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:46:54 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/30 22:02:12 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	rotate_rrr(t_vu **stack_a, t_vu **stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	revers_rotate_rra(stack_a);
	revers_rotate_rrb(stack_b);
	ft_printf("rrr\n");
}
