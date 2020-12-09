/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:16:07 by yde-mont          #+#    #+#             */
/*   Updated: 2020/12/05 05:47:27 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*pt;
	char			*pt2;

	i = 0;
	if (!(pt = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	pt2 = pt;
	while (*s)
	{
		*pt = f(i++, *s++);
		pt++;
	}
	*pt = 0;
	return (pt2);
}
