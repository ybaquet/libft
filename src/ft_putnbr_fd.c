/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:19:57 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/30 11:32:52 by yde-mont         ###   ########lyon.fr   */
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
	return (len + 2);
}

void		ft_iota(int n, int fd)
{
	char	*pt;
	int		len;
	char	tab[11];

	if (-2147483648 == n)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		len = intlen(n);
		pt = tab;
		pt = pt + len - 1;
		*pt = 0;
		pt = putnbr(pt, n);
		ft_putstr_fd(pt, fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	char	tab[11];
	char	*s;

	s = tab;
	ft_iota(n, fd);
}
