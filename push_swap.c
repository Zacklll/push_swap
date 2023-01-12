/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <zael-wad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:13:20 by zael-wad          #+#    #+#             */
/*   Updated: 2023/01/12 02:43:46 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int main(int ac, char *av[])
{
    t_vu *pu;
    t_vu  *p1;
    t_vu *p2;
   
    t_vu *stack_a;
    t_vu *stack_b;

    
    int i , j;
    i = 1;
    char **tmp; 
    while (av[i])
    {
        j = 0;
        tmp = ft_split(av[i], ' ');
        while (tmp[j])
        {
            ft_lstadd_back(&stack_a, ft_lstnew(atoi(tmp[j])));
            j++;
        }
        i++;
    }
    push_a(&stack_a, &stack_b);
   t_vu *p = stack_b;
    while (p)
    {
        printf("%d", p->data);
        p = p->next;
    }
}