/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:28:24 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/11 20:29:23 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_vu	*ft_lstnew(int a)
{
	t_vu	*ptr;

	ptr = malloc(sizeof(t_vu));
	if (!ptr)
		return (0);
	ptr->data = a;
	ptr->next = NULL;
	return (ptr);
}