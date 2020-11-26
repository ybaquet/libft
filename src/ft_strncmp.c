/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:29:14 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:30:07 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 && *s2 && n)
	{
		if (0 != ((unsigned char)*s1) - ((unsigned char)*s2))
			return (((unsigned char)*s1) - ((unsigned char)*s2));
		s1++;
		s2++;
		n--;
	}
	if (!n)
		return (0);
	if (*s1)
		return (1);
	else if (*s2)
		return (-1);
	return (0);
}
