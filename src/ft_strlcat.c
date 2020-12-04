/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:28:06 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/26 13:23:19 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	dst_size;
	size_t	src_size;
	int	len;
	int dst_len;

	i = 0;
	len = size;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	dst_len = dst_size;
	if (dst_size > size)
		return (src_size + size);
	while (dst_len + i < len - 1 && *src)
	{
		dst[dst_size + i] = *src++;
		i++;
	}
	dst[dst_size + i] = 0;
	return (dst_size + src_size);
}
