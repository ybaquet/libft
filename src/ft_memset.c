/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:26:58 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:27:05 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int i, size_t len)
{
	unsigned char	*d;
	char unsigned	c;

	if (NULL == b)
		return (NULL);
	d = b;
	c = (char unsigned)i;
	while (len--)
	{
		*d++ = c;
	}
	return (b);
}
