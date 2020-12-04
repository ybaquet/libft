#include "libft.h"

void ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list *first;

	first = *alst;
	if (first)
	{
		new->next = first;
		*alst = new;
	}
}
