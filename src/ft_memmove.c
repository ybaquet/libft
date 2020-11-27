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
#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (NULL == dest && NULL == src)
		return (dest);
	if (dest > src)
		while (n)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
