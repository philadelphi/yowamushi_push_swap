/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:06:27 by phaslan           #+#    #+#             */
/*   Updated: 2022/02/01 14:05:35 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_data data;
    s_stack *stackA;
    // s_stack *stackB;
    
    
    if (ac > 2)
    {
        if (!(Error_check(av)))
            return(0);
        printf("pas mal pas mal t fort on peut continuer\n");
        stackA = (s_stack *)malloc(sizeof(s_stack));
        if (!stackA)
            return (0);
        ft_memset(&data, 0, sizeof(t_data));
        init_stack(&stackA, &data, av);
        s_stack *pointeur;
        stackA = stackA->next;
        pointeur = stackA;
        while (pointeur)
        {
        printf("la valeur est de %d, son index de %d\n", pointeur->value, pointeur->index);
        pointeur = pointeur->next;
        }
            // data.stack_a = stack_init(av, data);*/ 
        // mettre les index avec un premier sort nul
        // determiner a quel algo j'envoie mon trieur
        //
    }
    freenode()
    return(0); 
}

