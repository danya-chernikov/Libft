#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nptr;
	
	nptr = (*lst)->next;
	while (nptr->next != NULL)
		nptr = nptr->next;
	nptr->next = new;
	new->next = NULL;
}
