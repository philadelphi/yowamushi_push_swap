/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:54:14 by phaslan           #+#    #+#             */
/*   Updated: 2022/02/01 14:03:42 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void addNode(s_stack **stack, int value)
{
    s_stack *current;
    s_stack *new;
    new = (s_stack *)malloc(sizeof(s_stack));
    if (!new)
        return ;
    new->value = value;
    new->index = 0;
    new->next = NULL;
    current = *stack;
    if (current)
    {
        while(current->next)
            current = current->next;
        current->next = new;
    }
    else
            *stack = new;
}

static void set_index(s_stack **stack)
{
    s_stack *current;
    s_stack *next;

    if (!(*stack))
        return ;
    current = *stack;
    next = current->next;
    while (current)
    {
        while (next)
        {
            if(current->value > next->value)
                current->index++;
            next = next->next;
        }
        current = current->next;
        next = *stack;
    }
}

void init_stack(s_stack **stackA, t_data *data, char **av)
{
    int i = 1;
    data->listlen = 0;
    while(av[i])
    {
        addNode(stackA, atoi(av[i]));
        data->listlen++;
        i++;
    }
    set_index(stackA);
}