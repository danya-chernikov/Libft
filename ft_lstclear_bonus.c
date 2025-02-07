/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 01:23:22 by dchernik          #+#    #+#             */
/*   Updated: 2025/02/07 01:23:23 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* There is no sense in applying this function to any
 * node other than the head node of the list. It’s
 * simply impossible! For example, if we attempt to
 * release a node that is not the head (a node located
 * farther down the chain, to the 'right' of the head
 * node), how can we set the next pointer of its previous
 * node to NULL? We cannot set this pointer to NULL
 * because we do not have the address of the preceding node
 * (the one to the 'left' from `lst`). Therefore, the only
 * way to use this function is to free the entire list,
 * starting from the head node (`lst` == `head`) */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur_node;
	t_list	*next_node;

	if ((lst == NULL) || (*lst == NULL) || (del == NULL))
		return ;
	cur_node = (*lst)->next;
	if (cur_node != NULL)
		next_node = cur_node->next;
	del((*lst)->content);
	free(*lst);
	(*lst) = NULL;
	while (cur_node != NULL)
	{
		del(cur_node->content);
		free(cur_node);
		cur_node = next_node;
		if (cur_node == NULL)
			break ;
		next_node = next_node->next;
	}
	lst = NULL;
}
