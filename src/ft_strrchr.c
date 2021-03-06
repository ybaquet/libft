/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:27:21 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:27:44 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char *pt;

	pt = NULL;
	while (*s)
	{
		if (((unsigned char)*s) == ((unsigned char)c))
			pt = (char *)s;
		s++;
	}
	if (!c)
		pt = (char *)s;
	return (pt);
}
