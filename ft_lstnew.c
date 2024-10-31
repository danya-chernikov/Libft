#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*lptr;

	lptr = (t_list *)malloc(1 * sizeof(t_list));
	lptr->content = content;
	lptr->next = NULL;
	return (lptr);
}
