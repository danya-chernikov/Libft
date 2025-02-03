#include "libft.h"

/* This function must use del() in case of a memory allocation error when
 * creating a new list! That's what the del() function is for! It is
 * necessary to delete all the previously allocated nodes along with their
 * contents if ft_lstnew() fails to allocate memory for a new node */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list_head;
	t_list	*node;
	t_list	*nptr;

	if ((lst == NULL) || (f == NULL) || (del == NULL))
		return (NULL);
	nptr = lst;
	new_list_head = ft_lstnew(nptr->content);
	if (new_list_head == NULL)
		return (NULL);
	f(new_list_head->content);
	nptr = nptr->next;
	while (nptr != NULL)
	{
		node = ft_lstnew(nptr->content);
		if (node == NULL)
		{
			nptr = new_list_head;
			while (nptr != NULL)
			{
				del(nptr->content);
				free(nptr);
				nptr = nptr->next;
			}
			return (NULL);
		}
		ft_lstadd_back(new_list_head, node);
		f(node->content);
		nptr = nptr->next;
	}
	return (new_list_head);
}
