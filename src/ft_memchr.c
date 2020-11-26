/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:23:32 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:23:45 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *src, int i, size_t n)
{
	char unsigned	c;
	char unsigned	*p;

	if (NULL == src)
		return (NULL);
	c = (char unsigned)i;
	p = (char unsigned *)src;
	while (n--)
	{
		if (c == *p)
			return (p);
		p++;
	}
	return (NULL);
}
