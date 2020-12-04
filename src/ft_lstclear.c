#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;

	current = *lst;
	while (current)
	{
		del(lst);
		free(current);
		current = current->next;
	}
}
