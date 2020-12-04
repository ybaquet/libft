/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:10:42 by yde-mont          #+#    #+#             */
/*   Updated: 2020/12/04 10:50:09 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long long	result;
	int			sign;

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
	{
		if (922337203685477581 < result
		|| (922337203685477580 < result && (-1 == sign ? 8 : 7) < *str - 48))
			return (-1 == sign ? 0 : -1);
		result = result * 10 + *str++ - 48;
	}
	return (result * sign);
}
