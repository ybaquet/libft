/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:25:35 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:25:58 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char *src2;

	if (NULL == src && NULL == dest)
		return (NULL);
	dest2 = dest;
	src2 = src;
	while (n--)
	{
		*dest2++ = *src2++;
	}
	return (dest);
}
