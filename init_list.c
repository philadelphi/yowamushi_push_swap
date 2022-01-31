/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:54:14 by phaslan           #+#    #+#             */
/*   Updated: 2022/01/30 16:23:18 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void addNode(s_stack **listA, int value)
{
    s_stack *current;
    s_stack *new;

    new = (s_stack*)malloc(sizeof(s_stack));
    if (!new)
        return ;
    new->value = value;
    new->index = 1;
    new->next = NULL;
    current = *listA;
    if(current)
    {
        while (current->next)
            current = current->next;
        current->next = new;
    }
    else
        *listA = new;
}

static void set_index(s_stack **listA)
{
    s_stack *current;
    s_stack *next;

    if(!(*listA))
        return ;
    current = *listA;
    next = current->next;

    while (current)
    {
        while(next)
        {
            if (current->value > next->value)
                current->index++;
            next = next->next;
        }
        current = current->next;
        next = *listA;
    }
}

void initList(s_stack **listA, t_data *info, char **av)
{
    int i;
    info->listlen = 0;

    i = 1;
    while (av[i])
    {
        addNode(listA, atoi(av[i]));
        info->listlen++;
        i++;
    }
    set_index(listA);
}

