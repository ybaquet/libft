/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:18:48 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/26 11:38:48 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char const	*pt;
	size_t		len;
	int			start;

	len = ft_strlen(s1);
	start = 0;
	pt = s1 + len - 1;
	while (is_set(*pt, set))
	{
		pt--;
		len--;
	}
	pt = s1;
	while (is_set(*pt, set))
	{
		pt++;
		start++;
	}
	return (ft_substr(s1, start, len - start));
}
