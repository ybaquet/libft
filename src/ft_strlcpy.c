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
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	len = ft_strlen(src);
	if (!dstsize)
		return (len);
	if (dstsize--)
		while (*src && dstsize--)
		{
			*dst++ = *src++;
		}
		*dst = 0;
	return (len);
}
