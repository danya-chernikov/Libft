#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nptr;

	if (lst->next == NULL)
		return (lst);
	nptr = lst->next;
	while (nptr->next != NULL)
		nptr = nptr->next;
	return (nptr);
}
