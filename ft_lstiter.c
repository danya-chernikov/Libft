#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nptr;

	if ((lst == NULL) || (f == NULL))
		return ;
	nptr = lst;
	while (nptr != NULL)
	{
		f(nptr->content);
		nptr = nptr->next;
	}
}
