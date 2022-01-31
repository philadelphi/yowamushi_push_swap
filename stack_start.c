/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:45:59 by phaslan           #+#    #+#             */
/*   Updated: 2022/01/28 14:44:52 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int isnb(char *nb)
{
    int i;

    i = 0;
    while (nb[i])
    {
            if (nb[i] == '-' && i == 0)
                i++;
            if (!(ft_isdigit(nb[i])))
                return(0);
            i++;
    }
    return(1);
} 

int	has_dp(char *nb, char **av, int i)
{
    long int num = ft_atoi(nb);
    while (av[i + 1])
    {
        if(num == ft_atoi(av[i + 1]))
            return(1);
        i++;
    }
    return(0);

}


int isint(char *av)
{
    long long num = ft_atoi(av);
    if (num < INT_MIN || num > INT_MAX)
    {
        printf("on depasse large le scope du int\n");
        return(0);
    }
    return(1);
}

int Error_check(char **av)
{
    int i = 1;
    while(av[i])
    {
        printf("%s\n", av[i]);
        if (!isnb(av[i]))
        {   
            printf("c pas un chiffre ca\n");
            return(0);
        }
        if (has_dp(av[i], av, i))
        {
            printf("y'a un doublon");
            return(0);
        }
        if (!isint(av[i]))
        {
            printf("c trop c trop\n");
            return(0);
        }
        i++;
    }
    return(1);
}