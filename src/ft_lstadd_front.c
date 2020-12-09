/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 05:42:30 by yde-mont          #+#    #+#             */
/*   Updated: 2020/12/05 05:42:37 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list *first;

	if (new)
	{
		first = *alst;
		if (first)
		{
			new->next = first;
			*alst = new;
		}
		else
			*alst = new;
	}
}
