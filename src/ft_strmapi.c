/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:16:07 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/26 13:16:54 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*pt;
	char			*pt2;

	len = ft_strlen(s);
	if (!(pt = malloc(sizeof(char) * len + 1)))
		return (NULL);
	pt2 = pt;
	while (*s)
	{
		*pt = f(len, *s++);
		pt++;
	}
	*pt = 0;
	return (pt2);
}
