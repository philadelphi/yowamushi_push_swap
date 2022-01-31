/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:06:27 by phaslan           #+#    #+#             */
/*   Updated: 2022/01/30 16:22:08 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_data data;
    s_stack *stack_a;
    // s_stack stack_b;
    
    if (ac > 2)
    {
        if (Error_check(av))
            printf("pas mal pas mal t fort on peut continuer\n");
        initList(&stack_a, &data, av);
        
        int i = 0;
        s_stack *pointeur;
        pointeur = stack_a;
        while (i < data.listlen)
        {
            printf("chiffre : %d, index : %d", pointeur->value, pointeur->index);
            pointeur = stack_a->next;
            i++;   
        }

            // data.stack_a = stack_init(av, data);
    }   
        // mettre les index avec un premier sort nul
        // determiner a quel algo j'envoie mon trieur
        //
    return(0);
}