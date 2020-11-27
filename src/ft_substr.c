/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:15:06 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/26 11:15:08 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_size;
	size_t	pt_size;
	char	*pt;
	int		i;

	i = 0;
	s_size = ft_strlen(s);
	if (s_size <= start)
	{
		if (!(pt = malloc(1)))
			return (NULL);
		*pt = 0;
		return (pt);
	}
	pt_size = (len + start > s_size ? s_size - start : len);
	if (!(pt = malloc(pt_size * sizeof(char) + 1)))
		return (NULL);
	while (start--)
		s++;
	while (pt_size--)
		pt[i++] = *s++;
	pt[i] = 0;
	return (pt);
}
