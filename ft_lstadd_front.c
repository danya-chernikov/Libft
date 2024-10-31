#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*nl_ptr;

	nl_ptr = (*lst)->next;
	while (nl_ptr != NULL)
		nl_ptr = nl_ptr->next;
	nl_ptr->next = new;
	nl_ptr->next->next = NULL;
}
