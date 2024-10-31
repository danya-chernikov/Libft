#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list **lst)
{
	t_list	*nl_ptr;
	int		size;

	size = 1;
	nl_ptr = (*lst)->next;
	while (nl_ptr != NULL)
	{
		nl_ptr = nl_ptr->next;
		size++;
	}
	return (size);
}
