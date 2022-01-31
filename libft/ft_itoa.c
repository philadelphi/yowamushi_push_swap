/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phaslan <phaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 15:46:11 by phaslan           #+#    #+#             */
/*   Updated: 2021/12/10 16:03:48 by phaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long ln)
{
	size_t	len;

	len = 1;
	while (ln >= 10)
		ln = (len++, ln / 10);
	return (len);
}

char	*ft_itoa(int n)
{
	long	ln;
	size_t	len;
	size_t	sign;
	char	*str;

	ln = n;
	sign = 0;
	if (ln < 0)
		ln = (sign++, -ln);
	len = ft_intlen(ln) + sign;
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		str[--len] = ln % 10 + '0';
		ln /= 10;
	}
	if (sign)
		str[len] = '-';
	return (str);
}
