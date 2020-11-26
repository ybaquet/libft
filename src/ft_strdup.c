/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:21:25 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/26 13:21:25 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*pt;

	len = ft_strlen(str);
	if (NULL != (pt = malloc(len * sizeof(char) * 1)))
		ft_strlcpy(pt, str, len);
	return (pt);
}
