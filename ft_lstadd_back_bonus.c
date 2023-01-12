/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:34:15 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/12 00:36:23 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_vu **lst, t_vu *new)
{
	t_vu	*p;

	if (new == NULL)
		return ;
	if (lst == NULL || *lst == NULL)
	{
		*lst = new;
		return ;
	}
	p = *lst;
	while (p->next)
	{
		p = p->next;
	}
	p->next = new;
}
