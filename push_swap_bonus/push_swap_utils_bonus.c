/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:23:11 by zael-wad          #+#    #+#             */
/*   Updated: 2023/02/08 17:52:28 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}

void	ft_free_all(char **tmp)
{
	int	j;

	j = 0;
	while (tmp[j])
	{
		free(tmp[j]);
		j++;
	}
	free(tmp);
}

int	check_if_sorted(t_var *stack_a)
{
	t_var	*head;

	if (!stack_a)
		return (0);
	head = stack_a;
	while (head->next != NULL)
	{
		if (head->data > head->next->data)
			return (-1);
		head = head->next;
	}
	return (1);
}

void	check_rep(t_var *stack_a)
{
	t_var	*tmp;
	int		i;

	i = 0;
	while (stack_a->next)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (stack_a->data == tmp->data)
			{
				printf("Error");
				exit(0);
			}
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
}
