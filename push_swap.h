/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:28:47 by phaslan           #+#    #+#             */
/*   Updated: 2022/01/30 16:21:04 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
# define INT_MAX 2147483647
# define INT_MIN -2147483648


typedef struct s_stack
{
    int             value;
    int             index;
    struct s_stack *next;

} s_stack;

typedef struct t_stack
{
    s_stack stack_a;
    s_stack stack_b;
    int     listlen;
} t_data;

int     Error_check(char **av);
void    initList(s_stack **listA, t_data *info, char **av);


#endif