/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:21:20 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:22:34 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int i, size_t n)
{
	unsigned char		*dest2;
	const unsigned char *src2;
	unsigned char		c;

	if (NULL == dest && NULL == src)
		return (dest);
	c = (char unsigned)i;
	dest2 = dest;
	src2 = (unsigned char *)src;
	while (n--)
	{
		*dest2++ = *src2;
		if (c == *src2)
			return (dest2);
		src2++;
	}
	return (NULL);
}
