/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:26:29 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:26:30 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	unsigned char	tab[n];
	size_t			i;

	i = 0;
	if (NULL == dest || NULL == src)
		return (dest);
	dest2 = dest;
	src2 = src;
	while (i < n)
		tab[i++] = *src2++;
	i = 0;
	while (i < n)
		*dest2++ = tab[i++];
	return (dest);
}
