/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_bouns1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:44:07 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/01 12:44:48 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap_bonus.h"

int	ft_lstsize(t_var *lst)
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

void	ft_lstclear(t_var *head)
{
	t_var	*tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

t_var	*ft_lstnew(int a)
{
	t_var	*ptr;

	ptr = malloc(sizeof(t_var));
	if (!ptr)
		return (0);
	ptr->data = a;
	ptr->next = NULL;
	return (ptr);
}

void	ft_lstadd_front(t_var **lst, t_var *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_var **lst, t_var *new)
{
	t_var	*p;

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
