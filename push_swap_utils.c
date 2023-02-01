/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:27:23 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/01 12:44:35 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_vu *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lstclear(t_vu *head)
{
	t_vu	*tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

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

void	ft_lstadd_front(t_vu **lst, t_vu *new)
{
	new->next = *lst;
	*lst = new;
}

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
		p = p->next;
	p->next = new;
}
