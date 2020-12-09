/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:41:31 by yde-mont          #+#    #+#             */
/*   Updated: 2020/12/02 08:18:21 by yde-mont         ###   ########lyon.fr   */
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
		while (*s1 == c && *s1)
			s1++;
		if (*s1)
			nb++;
		while (*s1 != c && *s1)
			s1++;
	}
	return (nb);
}

static int	clear(char **result, int nb_words)
{
	while (nb_words--)
		free(*--result);
	*result = NULL;
	return (0);
}

static int	next_word(const char *s1, char c, char **result, int start)
{
	const char	*pt;
	int			len;
	int			i;

	pt = s1 + start;
	len = 0;
	i = 0;
	while (*pt == c && *pt)
	{
		start++;
		pt++;
		i++;
	}
	while (*pt != c && *pt)
	{
		pt++;
		len++;
	}
	if (0 == len)
		*result = NULL;
	else if (!(*result = ft_substr(s1, start, len)))
		return (-1);
	return (len + i);
}

char		**ft_split(char const *s1, char c)
{
	char	**work;
	char	**result;
	int		start;
	int		len;
	int		nb_words;

	nb_words = 0;
	if (!(result = malloc(sizeof(char *) * (sep_count(s1, c) + 1))))
		return (NULL);
	start = 0;
	work = result;
	while (0 < (len = next_word(s1, c, work, start)) && NULL != *work)
	{
		start = start + len;
		work++;
		nb_words++;
	}
	if (-1 == len)
		clear(result, nb_words);
	return (result);
}
