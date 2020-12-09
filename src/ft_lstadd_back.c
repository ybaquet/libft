/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 05:42:01 by yde-mont          #+#    #+#             */
/*   Updated: 2020/12/05 05:45:28 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;
	t_list *first;

	first = *alst;
	if (new)
	{
		if (first)
		{
			last = ft_lstlast(first);
			last->next = new;
		}
		else
			*alst = new;
	}
}
