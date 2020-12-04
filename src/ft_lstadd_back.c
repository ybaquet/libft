#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;
	t_list *first;

	first = *alst;
	if (first)
	{
		last = ft_lstlast(first);
		last->next = new;
	}
	else
		*alst = new;
}
