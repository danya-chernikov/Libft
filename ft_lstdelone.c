#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void		ft_lstdelone(t_list *lst, void (*del)(void *))
{
	printf("ft_lstdelone()\n");
	printf("lst->content = %p\n", lst->content);
	del(lst->content);
	free(lst);
}
