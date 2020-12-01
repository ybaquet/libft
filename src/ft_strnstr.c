/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:36:53 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:37:21 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	const char	*work_needle;
	int			needle_len;
	int			count;
	int			size;

	work_needle = needle;
	needle_len = ft_strlen(needle);
	count = 0;
	size = n;
	if (!size)
		return (NULL);
	while (*haystack && count < (size - needle_len + 1))
	{
		if (!ft_strncmp(haystack, needle, needle_len))
		{
			return ((char *)haystack);
		}
		haystack++;
		count++;
	}
	return (NULL);
}
