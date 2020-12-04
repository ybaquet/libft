#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*list;

	if (!(list = malloc(sizeof(t_list))))
		return NULL;
	list->content = content;
	return (list);
}
