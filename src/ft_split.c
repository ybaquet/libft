/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:41:31 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/26 12:32:36 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	sep_count(char const *s1, char c)
{
	int nb;

	nb = 0;
	while (*s1)
	{
		if (*s1++ == c)
			nb++;
	}
	return (nb);
}

static char	*increment(char *pt, unsigned int *index)
{
	(*index)++;
	return (++pt);
}

void		split_(const char *str, char c, char **work)
{
	unsigned int	start;
	size_t			len;
	char			*s_work;

	s_work = (char *)str;
	start = 0;
	while (*s_work)
	{
		while (*s_work == c && *s_work)
			s_work = increment(s_work, &start);
		len = 0;
		while (*s_work != c && *s_work)
		{
			s_work++;
			len++;
		}
		if (0 < len)
		{
			*work++ = ft_substr(str, start, len);
			start = start + len;
		}
	}
	*work = NULL;
}

char		**ft_split(char const *s1, char c)
{
	char			**result;

	if (!(result = malloc(sizeof(char *) * sep_count(s1, c) + 1)))
		return (NULL);
	split_(s1, c, result);
	return (result);
}
