/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:12:52 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/26 13:15:41 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*putnbr(char *pt, int nb)
{
	int sign;

	sign = 0 > nb ? 1 : 0;
	if (sign)
		nb *= -1;
	while (nb > 9)
	{
		--pt;
		*pt = '0' + (nb % 10);
		nb = nb / 10;
	}
	*--pt = '0' + nb % 10;
	if (sign)
		*--pt = '-';
	return (pt);
}

static int	intlen(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (len++);
}

char		*ft_itoa(int n)
{
	char	*pt;
	char	*pt2;
	int		len;

	if (-2147483648 == n)
	{
		if (!(pt = malloc(sizeof(char) * 11 + 1)))
			return (NULL);
		pt2 = "-2147483648";
		ft_memcpy(pt, pt2, 11);
		return (pt);
	}
	len = intlen(n);
	if (!(pt = malloc(sizeof(char) * len + 1)))
		return (NULL);
	pt2 = pt;
	pt = pt + len;
	*pt = 0;
	putnbr(pt, n);
	return (pt2);
}
