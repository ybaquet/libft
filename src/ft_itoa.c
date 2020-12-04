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

char	*ft_itoa(int nbr)
{
	char		*pt;
	int			len;
	long long	n;

	n = nbr;
	len = (n <= 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	while (nbr)
		nbr = (len++) ? nbr / 10 : nbr / 10;
	nbr = n ? 1 : 0;
	if (!(pt = ft_calloc(1, len + 1)))
		return (NULL);
	pt[len] = 0;
	while (len && n)
	{
		pt[--len] = n % 10 + 48;
		n = n / 10;
	}
	if (len)
		pt[0] = nbr ? '-' : '0';
	return (pt);
}
