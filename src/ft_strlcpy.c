/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:28:23 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:28:33 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int count;

	count = 0;
	if (!dstsize)
	{
		*dst = 0;
		return (0);
	}
	while (*src && dstsize--)
	{
		*dst++ = *src++;
		count++;
	}
	*dst = 0;
	return (count);
}
