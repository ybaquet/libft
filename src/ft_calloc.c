/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:23:42 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/26 13:24:34 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		len;
	void	*pt;
	char	*pt2;

	len = count * size;
	pt = malloc(len);
	pt2 = pt;
	if (NULL != pt)
		while (len--)
			*pt2++ = 0;
	return (pt);
}
