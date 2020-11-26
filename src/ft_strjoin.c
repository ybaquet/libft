/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:17:12 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/26 11:17:31 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pt;
	char	*result;

	pt = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	result = pt;
	if (NULL == pt)
		return (NULL);
	while ((*pt = *s1++))
		pt++;
	while ((*pt++ = *s2++))
		;
	return (result);
}
