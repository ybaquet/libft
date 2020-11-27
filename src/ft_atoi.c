/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:10:42 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:13:01 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			ft_atoi(const char *str)
{
	long long result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n'
			|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if ('-' == *str || '+' == *str)
	{
		if ('-' == *str)
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
		result = result * 10 + *str++ - 48;
	return (result * sign);
}
