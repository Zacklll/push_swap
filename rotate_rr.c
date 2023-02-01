/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:08:10 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/30 22:02:10 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	rotate_rr(t_vu **stack_a, t_vu **stack_b)
{
	rotate_rb(stack_b);
	rotate_ra(stack_a);
	ft_printf("rr\n");
}
